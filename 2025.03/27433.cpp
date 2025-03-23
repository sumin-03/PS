#include <iostream>

using namespace std;

long long function(int num) {
	if (num <= 1) return 1;
	return num * function(num - 1);
}

int main() {
	int n;
	cin >> n;
	cout << function(n);
	return 0;
}
