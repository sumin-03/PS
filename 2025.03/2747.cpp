#include <iostream>

using namespace std;

int list[45] = {0, 1};

int function(int n) {
    if(n == 0) return list[n];
    else if(n == 1) return list[n];
    
    if(list[n] == 0)
        list[n] = function(n - 1) + function(n - 2);
    return list[n];
}

int main(void) {
    int n;
    cin >> n;
    cout << function(n) << endl;
}