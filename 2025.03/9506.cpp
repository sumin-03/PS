#include <iostream>

using namespace std;

void function(int n) {
    int ans = 0, cnt = 0;
    int list[n] = {0, };

    for(int i = 1; i < n; i++){
        if(n % i == 0) {
            ans += i;
            list[cnt] = i;
            cnt++;
        }
    }
    if(ans != n) cout << n << " is NOT perfect.\n";
    else {
        cout << n << " = ";
        for(int i = 0; i < cnt; i++) {
            cout << list[i];
            if(i != cnt - 1) cout << " + ";
        }
        cout << "\n";
    }
}

int main(void) {
    int n;
    while(1) {
        cin >> n;
        if(n == -1) break;
        function(n);
    }
    
}