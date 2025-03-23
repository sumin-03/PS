#include <iostream>
using namespace std;

__int64 n, m, answer;

int permutation(int a, int b) {
    int value = 1;
    for(int i = 0, j = a; i < b; i++, j--) {
        value *= j;
    }
    return value;
}

int main(void) {
    cin >> n >> m;
    answer = permutation(n, m) / permutation(m, m);

    cout << answer << "\n";

    return 0;
}