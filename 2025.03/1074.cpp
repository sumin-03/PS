#include <iostream>
#include <cmath>

using namespace std;

int ans = 0;

int function(int n, int r, int c) {
    if(n == 1) return r * 2 + c;

    int mid = pow(2, n - 1);
    if(r < mid && c < mid) {
        return function(n - 1, r, c);
    }
    else if(r < mid && c >= mid) {
        return pow(2, n) + function(n - 1, r, c - mid);
    }
    else if(r >= mid && c < mid) {
        return 2 * pow(2, n) + function(n - 1, r - mid, c);
    }
    else {
        return 3 * pow(2, n) + function(n - 1, r - mid, c - mid);
    }
}

int main(void)  {
    int n, r, c;
    cin >> n >> r >> c;
    cout << function(n, r, c) << endl;
    return 0;
}