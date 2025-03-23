#include <iostream>

using namespace std;

int list[21][21][21] = {0, };

int w(int a, int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0)
		return 1;

	if (a > 20 || b > 20 || c > 20)
		return w(20, 20, 20);

	if (list[a][b][c] != 0)
		return list[a][b][c];

	if (a < b && b < c)
	{
		list[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
		return list[a][b][c];
	}

	list[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
	return list[a][b][c];
}
int main(void)
{
	int a, b, c;
	while (true)
	{
		cin >> a >> b >> c;
		
		if (a == -1 && b == -1 && c == -1)
			break;

		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
	}

    return 0;
}