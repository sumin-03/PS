#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int r;
    while(b != 0) {
      r = a % b;
      a = b;
      b = r;
    }
    return a;
}

int main(void) {
    int ans_s, ans_m;
    int s1, s2, m1, m2;
    cin >> s1 >> m1;
    cin >> s2 >> m2;

    ans_m = (m1 * m2) / gcd(m1, m2);
    ans_s = s1 * (ans_m / m1) + s2 * (ans_m / m2);

    int g = gcd(ans_s, ans_m);

    cout << ans_s / g << " " << ans_m / g << "\n"; 

    return 0;
}