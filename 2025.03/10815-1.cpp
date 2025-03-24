#include <iostream>
#include <map>
#include <vector>
using namespace std;

int n, m;
map<int, bool> card;

int main(void) {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        card[input] = true;
    }

    cin >> m;
    for(int i = 0; i < m; i++) {
        int target;
        cin >> target;

        if(card.find(target) == card.end()) cout << "0 ";
        else cout << "1 ";
    }    

    return 0;
}