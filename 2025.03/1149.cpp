#include <iostream>
#include <algorithm>

using namespace std;

int list[1001][3];

int main() {
    int N;
    int cost[3];

    list[0][0] = 0;
    list[0][1] = 0;
    list[0][2] = 0;

    cin >> N;
    for(int i = 1; i <= N; ++i)
    {
        cin >> cost[0] >> cost[1] >> cost[2];
        list[i][0] = min(list[i - 1][1],list[i - 1][2]) + cost[0];
        list[i][1] = min(list[i - 1][0],list[i - 1][2]) + cost[1];
        list[i][2] = min(list[i - 1][1],list[i - 1][0]) + cost[2];
    }

    cout << min(list[N][2],min(list[N][0],list[N][1]));

    return 0;
}
