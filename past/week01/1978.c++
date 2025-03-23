#include <iostream>

int main(void) {
    int n, temp, result = 0;
    std::cin >> n;

    for(int cnt, i = 0; i < n; i++) {
        cnt = 0;
        std::cin >> temp;
        for(int j = 1; j < temp + 1; j++) {
            if(temp % j == 0) {
                cnt++;
            }
        }
        if(cnt == 2) {
            result++;
        }
    }
    std::cout << result << std::endl;

    return 0;
}