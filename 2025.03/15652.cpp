#include <iostream>

using namespace std;

int n, m;
int arr[8] = {0,};
bool visited[8] = {0,};

void function(int num, int cnt)
{
    if(cnt == m)
    {
        for(int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i = num; i <= n; i++)
    {
            visited[i] = true;
            arr[cnt] = i;
            function(i, cnt + 1);
            visited[i] = false;
    }
}

int main() {
    cin >> n >> m;
    function(1, 0);
    return 0;
}