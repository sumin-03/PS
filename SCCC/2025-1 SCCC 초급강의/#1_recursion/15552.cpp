#include <iostream>

using namespace std;

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T;
    int a, b;
    cin >> T;
    while(T--) {
        cin >> a >> b;
        cout << a + b << "\n";
    }

    return 0;
}