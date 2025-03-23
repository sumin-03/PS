#include <iostream>

using namespace std;

int function(int n, int k) {
    for(int i = n; i > 0; i--) {
        if(n % i == 0) {
            k--;
            if(k == 0) return n / i;
        }
    }
    return 0;
}

int main(void) {
    int n, k;
    cin >> n >> k;
    cout << function(n, k) << "\n";

    return 0;
}