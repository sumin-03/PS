#include <iostream>
using namespace std;

class Stack {
public:
    int stack[10000];
    int begin = 0;
    int end = 0;

    Stack() {}

    void push(int num) {
        stack[end] = num;
        end++;
    }
    bool empty() {
        if(begin == end) return true;
        return false;
    }
    int pop() {
        int temp = stack[end - 1];
        if(empty()) return -1;
        stack[end - 1] = 0;
        end--;
        return temp;
    }
    int size() {
        return end - begin;
    }
    int top() {
        if(empty()) return -1;
        return stack[end - 1];
    }
};

int main(void) {
    int n;
    string input;
    cin >> n;

    Stack s;

    while(n--) {
        cin >> input;
        if(input == "push") {
            int num;
            cin >> num;
            s.push(num);
        }
        else if(input == "pop") {
            cout << s.pop() << "\n";
        }
        else if(input == "size") {
            cout << s.size() << "\n";
        }
        else if(input == "empty") {
            cout << s.empty() << "\n";
        }
        else if(input == "top") {
            cout << s.top() << "\n";
        }
    }

    return 0;
}