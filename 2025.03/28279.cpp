#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* before;
    Node* next;

    Node(int value) {
        data = value;
        before = nullptr;
        next = nullptr;
     }
};

class Deque {
private:
    int count;
    Node* firstNode;
    Node* lastNode;

public:
    Deque() {
        firstNode = nullptr;
        lastNode = nullptr;
        count = 0;
    }

    void push_front(int n) {
        Node* newNode = new Node(n);
        if (empty()) {
            firstNode = lastNode = newNode;
        } else {
            newNode->next = firstNode;
            firstNode->before = newNode;
            firstNode = newNode;
        }
        count++;
        return;
    }

    void push_back(int n) {
        Node* newNode = new Node(n);
        if (empty()) {
            firstNode = lastNode = newNode;
        } else {
            newNode->before = lastNode;
            lastNode->next = newNode;
            lastNode = newNode;
        }
        count++;
        return;
    }

    int pop_front() {
        if (empty()) {
            return -1;
        }
        Node* temp = firstNode;
        int num = temp->data;
        firstNode = firstNode->next;
        if (firstNode != nullptr) {
            firstNode->before = nullptr;
        } else {
            lastNode = nullptr;
        }
        delete temp;
        count--;
        return num;
    }

    int pop_back() {
        if (empty()) {
            return -1;
        }
        Node* temp = lastNode;
        int num = temp->data;
        lastNode = lastNode->before;
        if (lastNode != nullptr) {
            lastNode->next = nullptr;
        } else {
            firstNode = nullptr;
        }
        delete temp;
        count--;
        return num;
    }

    int size() {
        return count;
    }

    bool empty() {
        if(count == 0)
            return 1;
        return 0;
    }

    int front() {
        if (empty()) {
            return -1;
        }
        return firstNode->data;
    }

    int back() {
        if (empty()) {
            return -1;
        }
        return lastNode->data;
    }
};

// 메인 함수
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Deque dq;
    int n, menu, num;
    cin >> n;
    while(n--) {
        cin >> menu;
        switch(menu) {
            case 1:
                cin >> num;
                dq.push_front(num);
                break;
            case 2:
                cin >> num;
                dq.push_back(num);
                break;
            case 3:
                cout << dq.pop_front() << "\n";
                break;
            case 4:
                cout << dq.pop_back() << "\n";
                break;
            case 5:
                cout << dq.size() << "\n";
                break;
            case 6:
                cout << dq.empty() << "\n";
                break;
            case 7:
                cout << dq.front() << "\n";
                break;
            case 8:
                cout << dq.back() << "\n";
                break;
        }
    }

    return 0;
}
