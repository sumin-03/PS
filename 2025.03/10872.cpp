#include <iostream>

using namespace std;

int function(int n) {
    if(n <= 1) return 1;

    return n * function(n - 1);
}

int main(void) {
    int n;
    cin >> n;
    cout << function(n) << endl;
}