#include <iostream>
#include <algorithm>

using namespace std;

int list[50];

void print_rank(int i) {
    if(i < 6) {
        cout << "A+\n";
        return;
    }
    if(i < 16) {
        cout << "A0\n";
        return;
    }
    if(i < 31) {
        cout << "B+\n";
        return;
    }
    if(i < 36) {
        cout << "B0\n";
        return;
    }
    if(i < 46) {
        cout << "C+\n";
        return;
    }
    if(i < 49) {
        cout << "C0\n";
        return;
    }
    else {
        cout << "F\n";
        return;
    }
}

int main(void) {
    int n, ans;
    for(int i = 0; i < 50; i++) {
        cin >> list[i];
    }
    cin >> n;

    for(int i = 0; i < 50; i++) {
        if(list[i] == n) ans = i + 1;
    }

    print_rank(ans);

    return 0;
}