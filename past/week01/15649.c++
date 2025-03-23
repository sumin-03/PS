/*
백트래킹은 해를 찾아 탐색하는 도중 경로가 해가 될 것같지 않으면 되돌아가는 기법
불필요한 부분을 쳐낸다는 의미에서 가지치기(pruning) 한다고 표현한다.
백트래킹은 완전 탐색 기법에 기반하며 DFS를 응용한다.
DFS는 모든 경로를 탐색하는 반면, 백트래킹은 불필요한 경로를 사전에 차단하여 탐색하지 않는다.
*/
#include <iostream>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX];
bool visited[MAX]; //백트래킹하며 이미 방문된 숫자인지 판별

void dfs(int depth);

int main(void) {
    cin >> n >> m;
    dfs(0);        
}

void dfs(int depth) {
    // 
    if(depth == m) {
        for(int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i = 1; i <= n; i++) {
        if(!visited[i]) /*i 방문 체크*/ {
            visited[i] = true; //방문 확인
            arr[depth] = i; //arr 갱신
            dfs(depth+1);
            visited[i] = false;
        }
    }
    return;
}
// 트리 그려서 쉽게 이해하자