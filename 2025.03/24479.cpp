#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, r;
vector<vector<int>> edges;
vector<int> visited;

void dfs(int numNode, int startNode) {

}

int main(void) {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    cin >> n >> m >> r;
    edges.resize(n + 1, vector<int>(0));
    visited.resize(n + 1, 0);

    for(int i = 0; i < m; i++) {
        int from, to;
        cin >> from >> to;
        edges[from].push_back(to);
        edges[to].push_back(from);
    }

    for(int i = 1; i < edges.size(); i++) {
        sort(edges[i].begin(), edges[i].end());
    }



    for(int i = 1; i < edges.size(); i++) {
        for(int j = 0; j < edges[i].size(); j++) {
            cout << edges[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}