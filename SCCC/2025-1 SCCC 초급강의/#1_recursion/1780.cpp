#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> paper;
vector<int> ans(3, 0);
int n;

void func(int x, int y, int size) {
    bool same = true;
    for(int i = x; i < x + size; i++) {
        for(int j = y; j < y + size; j++) {
            if(paper[i][j] != paper[x][y]) {
                same = false;
                break;
            }
        }
        if(same == false) break;
    }
    if(!same){
        func(x, y, size/3);
        func(x + size/3, y, size/3);
        func(x + size/3 + size/3, y, size/3);
        func(x, y + size/3, size/3);
        func(x + size/3, y + size/3, size/3);
        func(x + size/3 + size/3, y + size/3, size/3);
        func(x, y + size/3 + size/3, size/3);
        func(x + size/3, y + size/3 + size/3, size/3);
        func(x + size/3 + size/3, y + size/3 + size/3, size/3);
    }
    else {
        if(paper[x][y] == 1) ans[2]++;
        if(paper[x][y] == 0) ans[1]++;
        if(paper[x][y] == -1) ans[0]++;
    }
}

int main(void) {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    cin >> n;
    paper.resize(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> paper[i][j];
        }
    }

    func(0, 0, n);

    for(int i = 0; i < 3; i++) {
        cout << ans[0] << "\n";
    }

    return 0;
}