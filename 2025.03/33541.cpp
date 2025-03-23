#include <iostream>
#include <cmath>

using namespace std;

int function(int a) {
    int temp;
    for(int i = a + 1; i < 10000; i++) {
        temp = (i / 100) + (i % 100);
        if(pow(temp, 2) == i) return i;
    }
    return -1;
}

int main(void) {
    int x;
    cin >> x;
    cout << function(x) << "\n";
}