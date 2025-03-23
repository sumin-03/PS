#include <iostream>
#include <math.h>
using namespace std;

int n, s, temp, gap, answer = 0;

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(void) {
    cin >> n >> s;

    for(int i = 0; i < n; i++) {
        cin >> temp;
        gap = abs(temp - s);

        answer = gcd(gap, answer);
    }
    cout << answer << "\n";

    return 0;
}
