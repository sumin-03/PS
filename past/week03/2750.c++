#include <iostream>

using namespace std;

int arr[1000];
int n;

void bubble(int arr[], int size) {
    bool swapped;
    for(int i = 0; i < size - 1; i++) {
        swapped = false;
        for(int j = 0; j < size - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}


int main(void) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubble(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << "\n";
    }

    return 0;
}