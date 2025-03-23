#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int pooling(vector<vector<int>>& list, int x, int y, int size) {
    if (size == 1) {
        return list[x][y];
    }

    int newSize = size / 2;

    vector<int> temp;
    temp.push_back(pooling(list, x, y, newSize));
    temp.push_back(pooling(list, x, y + newSize, newSize));
    temp.push_back(pooling(list, x + newSize, y, newSize));
    temp.push_back(pooling(list, x + newSize, y + newSize, newSize));

    sort(temp.begin(), temp.end());
    return temp[2];
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int N;
    cin >> N;

    vector<vector<int>> list(N, vector<int>(N));

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> list[i][j];

    cout << pooling(list, 0, 0, N);

    return 0;
}
