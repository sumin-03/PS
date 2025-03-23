#include <iostream>

using namespace std;

long long function(long long a, long long b) {
    long long temp;
    while(b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main(void) {
    long long a, b;
    
    cin >> a >> b;

    cout << a * b / function(a, b) << "\n";


    return 0;
}