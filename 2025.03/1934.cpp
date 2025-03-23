#include<iostream>
 
using namespace std;
 
int function(int x, int y)
{
    if (x % y == 0)
        return y;
    else
        return function(y, x % y);
}
 
int main()
{
    int n;
    int a, b;
    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a >= b)
        {
            cout << a * b / function(a, b) << "\n";
        }
        else
            cout << a * b / function(b, a) << "\n"; 
    }
}