#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main(void) {
    int n, temp = 10, size;
    int list[10];

    cin >> n;
    for(int i = 0; i < 10; i++) {
        list[i] = n % temp;
        size = i + 1;
        n = n / temp;
        if(n == 0) break;
    }

    sort(list, list + size, compare);

    for(int i = 0; i < size; i++) {
        cout << list[i];
    }
    cout << "\n";

    return 0;
}