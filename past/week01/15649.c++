/*
��Ʈ��ŷ�� �ظ� ã�� Ž���ϴ� ���� ��ΰ� �ذ� �� �Ͱ��� ������ �ǵ��ư��� ���
���ʿ��� �κ��� �ĳ��ٴ� �ǹ̿��� ����ġ��(pruning) �Ѵٰ� ǥ���Ѵ�.
��Ʈ��ŷ�� ���� Ž�� ����� ����ϸ� DFS�� �����Ѵ�.
DFS�� ��� ��θ� Ž���ϴ� �ݸ�, ��Ʈ��ŷ�� ���ʿ��� ��θ� ������ �����Ͽ� Ž������ �ʴ´�.
*/
#include <iostream>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX];
bool visited[MAX]; //��Ʈ��ŷ�ϸ� �̹� �湮�� �������� �Ǻ�

void dfs(int depth);

int main(void) {
    cin >> n >> m;
    dfs(0);        
}

void dfs(int depth) {
    // 
    if(depth == m) {
        for(int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i = 1; i <= n; i++) {
        if(!visited[i]) /*i �湮 üũ*/ {
            visited[i] = true; //�湮 Ȯ��
            arr[depth] = i; //arr ����
            dfs(depth+1);
            visited[i] = false;
        }
    }
    return;
}
// Ʈ�� �׷��� ���� ��������