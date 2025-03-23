#include <iostream>
using namespace std;

int t, n;

int IsPrime(int num) {
    if(num == 1) return 0;
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) return 0;
    }
    return 1;
}

void goldbach(int num) {
    int temp = num / 2;
    while(1) {
        if(IsPrime(temp) == 1) {
            if(IsPrime(num - temp) == 1) break;
        }
        temp++;
    }
    cout << num - temp << " " << temp << "\n";
    return;    
}

int main(void) {
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        goldbach(n);
    }
    return 0;
}