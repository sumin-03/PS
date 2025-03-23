#include <iostream>

using namespace std;

long long list[102] = {0, 1, 1, 1, 2, 2, 3, };

long long function(int x) {
    if(list[x] != 0) return list[x];
    list[x] = function(x - 1) + function(x - 5);
    return list[x];
}

int main(void) {
    int n, m;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> m;
        cout << function(m) << "\n";
    }

    return 0;
}