#include <iostream>
#include <vector>
using namespace std;

int n, m;
int s, l, r;
vector<int> lights;

int main(void) {
    cin >> n >> m;
    lights.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> lights[i];
    }

    while(m--) {
        cin >> s >> l >> r;
        switch(s) {
            case 1:
                lights[l - 1] = r;
                break;
            case 2:
                for(int i = l - 1; i < r; i++) {
                    lights[i] = 1 - lights[i];
                }
                break;
            case 3:
                for(int i = l - 1; i < r; i++) {
                    lights[i] = 0;
                }
                break;
            case 4:
                for(int i = l - 1; i < r; i++) {
                    lights[i] = 1;
                }
                break;
        }
    }

    for(int i = 0; i < lights.size(); i++) {
        cout << lights[i] << " ";
    }
    cout << "\n";

    return 0;
}