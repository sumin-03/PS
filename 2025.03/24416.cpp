#include <iostream>

using namespace std;

int code1 = 0, code2 = 0;

int fib(int n) {
    if (n == 1 or n == 2) {
        code1++;
        return 1; // 코드 1
    } 
    return fib(n - 1) + fib(n - 2);
}

int fibonacci(int n) {
    int list[n + 1] = {0, 1, 1, };
    for(int i = 3; i < n + 1; i++) {
        code2++;
        list[i] = list[i - 1] + list[i - 2]; // 코드 2
    }
    return list[n];
}

int main(void) {
    int n;
    cin >> n;
    fib(n);
    fibonacci(n);
    cout << code1 << " " << code2 << "\n";
}