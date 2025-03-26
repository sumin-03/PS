#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> bridge;
vector<int> x;

int main(void) {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    cin >> n;
    cin >> m;
    bridge.resize(n);
    x.resize(m);
    for(int i = 0; i < m; i++) {
        cin >> x[i];
        bridge[x[i]] = 1;
    }

    int ans = max(x[0], (int)bridge.size() + 1 - x[x.size() - 1]);
    for(int i = 0; i < x.size() - 1; i++) {
        int temp = x[i + 1] - x[i];
        if(temp > ans * 2) {
            if(temp / 2 > 0) ans += temp / 2;
            else ans += 1;
        }
    }
    cout << ans << "\n";

    return 0;
}
