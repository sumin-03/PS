#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int list[5];
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        cin >> list[i];
        sum += list[i];
    }
    cout << sum / 5 << "\n";
    
    sort(list, list + 5);
    cout << list[2] << "\n";

    return 0;
}