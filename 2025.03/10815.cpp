#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> card, deck;

bool binarySearch(int target) {
    int left = 0;
    int right = card.size() - 1;

    while(left <= right) {
        int mid = (left + right) / 2;
        if(card[mid] == target) {
            return true;
        }
        else if(card[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return false;
}

int main(void) {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    cin >> n;
    card.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> card[i];
    }
    sort(card.begin(), card.end());
    cin >> m;
    deck.resize(m);
    for(int i = 0; i < m; i++) {
        cin >> deck[i];
    }

    for(int i = 0; i < m; i++) {
        deck[i] = binarySearch(deck[i]);
        cout << deck[i] << " ";
    }
    cout << "\n";

    return 0;
}