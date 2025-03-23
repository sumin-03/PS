#include <iostream>
#include <math.h>

using namespace std;

void hanoi(int n, int start, int end, int sub) {
    if(n == 1) {
        cout << start << " " << end << "\n";
        return;
    }

    hanoi(n - 1, start, sub, end);
    cout << start << " " << end << "\n";
    hanoi(n - 1, sub, end, start);
}

int main() {
    int n;
    cin >> n;

    cout << (1<<n) - 1 << "\n";
    if(n <= 20)
        hanoi(n, 1, 3, 2);

    return 0;
}