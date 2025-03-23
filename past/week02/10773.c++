#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> stack;
public:
    void push(int num) {
        stack.push_back(num);
        return;
    }
    void pop() {
        stack.pop_back();
        return;
    }
    int sum() {
        int sum = 0;
        for(int i = 0; i < stack.size(); i++) {
            sum += stack[i];
        }
        return sum;
    }
};

int main(void) {
    int k, input;
    Stack s;

    cin >> k;
    
    while(k--) {
        cin >> input;
        if(input == 0) s.pop();
        else s.push(input);
    }
    cout << s.sum() << "\n";

    return 0;
}