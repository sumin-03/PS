#include <iostream>

int gcd(int a, int b);

int main(void) {
    int a, b, r;
    std::cin >> a >> b;

    int GCD = gcd(a, b);
    int LCM = a*b / GCD;

    std::cout << GCD << std::endl << LCM << std::endl;

    return 0;
}

int gcd(int a, int b) {
    int r = a%b;
    while(r != 0) {
        a = b;
        b = r;
        r = a%b;
    }

    return b;
}