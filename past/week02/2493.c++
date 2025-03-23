#include <iostream>
#include <stack>
using namespace std;

stack<int> arr, temp;
int t, n, top;

int main(void) {
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        arr.push(n);
    }

    while(t--) {
        temp = arr;
        top = temp.top();
        temp.pop();

        while(top >= temp.top()) {
            temp.pop();
        }
        cout << top << "\n";
        arr.pop();
    }



    return 0;
}