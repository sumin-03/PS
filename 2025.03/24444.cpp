#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

vector<int> connect[100001];
vector<int> check;

void bfs(int start){
    int visit = 1;
    queue<int> q;
    q.push(start);
    check[start] = visit++;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i = 0; i < connect[x].size(); i++){
            int xx = connect[x][i];
            if(check[xx] == 0){
                check[xx] = visit++;
                q.push(xx);
            }
        }
    }
}

int main() {
    int n, m, k;
    int x, y;
    cin >> n >> m >> k;
    check.resize(n + 1, 0);

    for(int i = 1; i <= m; i++){
        cin >> x >> y;
        connect[x].push_back(y);
        connect[y].push_back(x);
    }

    for(int i = 1; i <= n; i++){
        sort(connect[i].begin(), connect[i].end());
    }

    bfs(k);

    for(int i = 1; i <= n; i++){
        cout << check[i] << "\n";
    }

    return 0;
}