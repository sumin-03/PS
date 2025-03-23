#include <iostream>

int main(void) {
    int tc = 0;
    std::cin >> tc;

    for(int i = 0; i < tc; i++) {
        int a = 0, b = 0, result = 0;
        std::cin >> a >> b;

        for(int temp = 1, j = 0; j < b; j++) {
            temp = temp * a;
            temp = temp % 10;
            if(temp == 0) {
                temp = 10;
            }
            result = temp;
        }

        std::cout << result << std::endl;
    }

    return 0;
}