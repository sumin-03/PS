#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

vector<int> edges[100001];
vector<int> order;

void bfs(int start) {
    int visit = 1;
    queue<int> temp;
    temp.push(start);
    order[start] = visit++;

    while(!temp.empty()) {
        int x = temp.front();
        temp.pop();
        for(int i = 0; i < edges[x].size(); i++) {
            int xx = edges[x][i];
            if(order[xx] == 0) {
                order[xx] = visit++;
                temp.push(xx);
            }
        }
    }
    return;
}

int main(void) {
    int n, m, r; // number of nodes, number of edges, first visit node
    int from, to;
    cin >> n >> m >> r;
    order.resize(n + 1, 0);

    for(int i = 0; i < m; i++) {
        cin >> from >> to;
        edges[from].push_back(to);
        edges[to].push_back(from);
    }

    for(int i = 1; i < order.size(); i++) {
        sort(edges[i].begin(), edges[i].end(), greater<int>());
    }

    bfs(r);

    for(int i = 1; i < order.size(); i++) {
        cout << order[i] << "\n";
    }
    
    return 0;
}