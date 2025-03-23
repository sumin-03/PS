#include <iostream>
using namespace std;

class Queue {
public:
    int queue[10000];
    int begin = 0;
    int end = 0;

    Queue() {}

    void push(int n) {
        queue[end] = n;
        end += 1;
    }

    bool empty() {
        if(end == begin) return true;
        else return false;
    }

    int pop() {
        if(empty()) return -1;
        int r = queue[begin];
        queue[begin] = 0;
        begin += 1;
        return r;
    }

    int size() {
        return end - begin;
    }

    int front() {
        if(empty()) return -1;
        return queue[begin];
    }

    int back() {
        if(empty()) return -1;
        return queue[end - 1];
    }
};

int main(void) {
    int t;
    cin >> t;

    Queue q;

    while(t--) {
        string input;
        cin >> input;

        if(input == "push") {
            int num;
            cin >> num;
            q.push(num);
        }
        else if(input == "pop") {
            cout << q.pop() << "\n";
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