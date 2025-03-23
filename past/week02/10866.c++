#include <iostream>
#include <string>
using namespace std;

class Deque {
private:
    int arr[10001]; // 최대 크기 설정
    int end = 0;    // deque의 끝을 나타냄
public:
    void push_front(int n) {
        if (end >= 10000) return; // 배열 초과 방지
        for (int i = end; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = n;
        end++;
    }
    void push_back(int n) {
        if (end >= 10000) return; // 배열 초과 방지
        arr[end++] = n;
    }
    int pop_front() {
        if (empty()) return -1;
        int ans = arr[0];
        for (int i = 1; i < end; i++) {
            arr[i - 1] = arr[i];
        }
        end--;
        return ans;
    }
    int pop_back() {
        if (empty()) return -1;
        return arr[--end];
    }
    int size() const {
        return end;
    }
    int empty() const {
        return end == 0;
    }
    int front() const {
        if (empty()) return -1;
        return arr[0];
    }
    int back() const {
        if (empty()) return -1;
        return arr[end - 1];
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Deque deq;
    int n, num;
    string command;

    cin >> n;
    while (n--) {
        cin >> command;
        if (command == "push_front") {
            cin >> num;
            deq.push_front(num);
        } else if (command == "push_back") {
            cin >> num;
            deq.push_back(num);
        } else if (command == "pop_front") {
            cout << deq.pop_front() << "\n";
        } else if (command == "pop_back") {
            cout << deq.pop_back() << "\n";
        } else if (command == "size") {
            cout << deq.size() << "\n";
        } else if (command == "empty") {
            cout << deq.empty() << "\n";
        } else if (command == "front") {
            cout << deq.front() << "\n";
        } else if (command == "back") {
            cout << deq.back() << "\n";
        }
    }

    return 0;
}
