#include <iostream>
using namespace std;

int arr[128][128];
int white = 0;
int blue = 0;

void func(int x, int y, int size) {
    bool cut = false;
    int first = arr[x][y];
    for(int i = x; i < x + size; i++) {
        for(int j = y; j < y + size; j++) {
            if(arr[i][j] != first) {
                cut = true;
                break;
            }
        }
    }
    if(cut) {
        func(x, y, size/2);
        func(x + size/2, y, size/2);
        func(x, y + size/2, size/2);
        func(x + size/2, y + size/2, size/2);
    }
    else {
        if(first == 1) blue++;
        else white++;
    }
}

int main(void) {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    func(0, 0, n);
    cout << white << "\n" << blue << "\n";

    return 0;
}