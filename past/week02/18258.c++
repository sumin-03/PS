#include <iostream>
#include <deque>
using namespace std;

class Queue {
private:
    deque<int> queue;
public:
    void push(int num) {
        queue.push_back(num);
        return;
    }
    int empty() {
        if(queue.size()) return 0;
        else return 1;
    }
    int pop() {
        if(queue.empty()) return -1;
        int num = queue.front();
        queue.pop_front();
        return num;
    }
    int size() {
        return queue.size();
    }
    int front() {
        if(queue.empty()) return -1;
        return queue.front();
    }
    int back() {
        if(queue.empty()) return -1;
        return queue.back();
    }
};

int main(void) {
    ios_base :: sync_with_stdio(false);
	cin.tie(NULL);

    int t, n;
    string input;
    Queue q;

    cin >> t;

    while(t--) {
        cin >> input;
        if(input == "push") {
            cin >> n;
            q.push(n);
        }
        else if(input == "pop") {
            cout << q.pop() << "\n";
        }
        else if(input == "size") {
            cout << q.size() << "\n";
        }
        else if(input == "size") {
            cout << q.size() << "\n";
        }
        else if(input == "empty") {
            cout << q.empty() << "\n";
        }
        else if(input == "front") {
            cout << q.front() << "\n";
        }
        else if(input == "back") {
            cout << q.back() << "\n";
        }
    }
    return 0;
}