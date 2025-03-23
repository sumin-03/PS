#include <iostream>

int main(void) {
    int n;
    std::cin >> n;

    for(int i = 2; i*i <= n;) {
        if(n % i == 0) {
            std::cout << i << std::endl;
            n /= i;
            continue;
        }
        i++;
    }
    if(n > 1) {
        std::cout << n << std::endl;
    }

    return 0;
}