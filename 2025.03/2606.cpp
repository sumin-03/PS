#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <queue>

using namespace std;

vector<int> edges[101];
vector<bool> infection;

void myFunction(int start) {
    queue<int> temp;
    temp.push(start);
    infection[start] = true;
    while(!temp.empty()) {
        int x = temp.front();
        temp.pop();
        for(int i = 0; i < edges[x].size(); i++) {
            int xx = edges[x][i];
            if(infection[xx] == 0) {
                infection[xx] = true;
                temp.push(xx);
            }
        }
    }
}

int main(void) {
    int numComputers, numEdges;
    int answer = 0;
    cin >> numComputers;
    cin >> numEdges;
    infection.resize(numComputers, false);

    for(int i = 0; i < numEdges; i++) {
        int from, to;
        cin >> from >> to;
        edges[from].push_back(to);
        edges[to].push_back(from);
    }

    for(int i = 1; i <= infection.size(); i++) {
        sort(edges[i].begin(), edges[i].end(), greater<int>());
    }

    myFunction(1);

    for(int i = 1; i <= infection.size(); i++) {
        if(infection[i] == true) {
            answer++;
        } 
    }

    cout << answer - 1 << "\n";


    return 0;
}