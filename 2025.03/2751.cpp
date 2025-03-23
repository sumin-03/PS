#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int list[n];

    for(int i = 0; i < n; i++) {
        cin >> list[i];
    }
    sort(list, list + n);
    for(int i = 0; i < n; i++) {
        cout << list[i] << "\n";
    }

    return 0;
}