#include <iostream>
#include <queue>
using namespace std;

queue<int> arr;
queue<int> sorted;
int n, k;

int main(void) {
    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        arr.push(i);
    }

    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= k; j++) {
            if(j == k) {
                sorted.push(arr.front());
                arr.pop();
            }
            else {
                arr.push(arr.front());
                arr.pop();
            }
        }
    }

    cout << "<";
    for(int i = 0; i < n; i++) {
        cout << sorted.front();
        sorted.pop();
        if(i < n - 1) cout << ", ";
    }
    cout << ">" << "\n";

    return 0;
}