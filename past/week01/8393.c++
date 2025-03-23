#include <iostream>

int main(void) {
    int n, result = 0;
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        result += i;
    }
    result += n;

    std::cout << result << std::endl;

    return 0;
}