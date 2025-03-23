#include <iostream>
using namespace std;
#define MAX 9

int n;
int arr[MAX];
bool visited[MAX];

void dfs(int depth);

int main(void) {
    cin >> n;
    dfs(0);

    return 0;
}

void dfs(int depth) {
    if(depth == n) {
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i = 1; i <= n; i++) {
        if(visited[i] == false) {
            visited[i] = true;
            arr[depth] = i;
            dfs(depth + 1);
            visited[i] = false;
        }
    }
}