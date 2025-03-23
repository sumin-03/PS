#include <iostream>
#include <string>

using namespace std;

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    string s;
    while(getline(cin, s)) {
        cout << s << "\n";
    }

    return 0;
}