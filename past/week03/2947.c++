#include <iostream>

using namespace std;

void print_arr(int arr[]) {
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return;
}

void bubble(int arr[]) {
    bool swapped;
    for(int i = 0; i < 4; i++) {
        swapped = false;
        for(int j = 0; j < 4 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
                print_arr(arr);
            }
        }
        if(!swapped) break;
    }
}

int main(void) {
    int arr[5];

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    bubble(arr);


    return 0;
}