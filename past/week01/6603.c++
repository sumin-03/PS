#include <iostream>
using namespace std;

int k;
int arr[14];
int arred[6];

void dfs(int depth, int num) {
    if(depth == 6) {
        for(int i = 0; i < 6; i++) {
            cout << arred[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i = num; i < k; i++) {
        arred[depth] = arr[i];
        dfs(depth + 1, i + 1);
    }
}

int main(void) {
    while(true) {
        cin >> k;
        if(k == 0) break;
        for(int i = 0; i < k; i++) {
            cin >> arr[i];
        }

        dfs(0, 0);
        cout << "\n";
    }

    return 0;
}