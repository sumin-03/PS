#include <iostream>
using namespace std;

int n, target, answer;
int arr[20];


//��� ����� �� : ��� ���ڰ� ���ų� �ȵ��ų�
// ���� 2�� n�� 

// -----dfs�� �ΰ��� ���� ������ ---- 
// 1. �ش� ���ڰ� ���� : sum += �������
// 2. �ش� ���ڰ� �ȵ��� : sum = sum

void dfs(int i, int sum) {

    //��� ���� �� ���ϸ� ����
    if (i == n) return;

    //���ݱ����� �տ��� ���縦 ���� > �����̸� ī��Ʈ 1
    if (sum + arr[i] == target) answer++;

    //�ƴϸ� dfs�� ��� ������
    //���� ���ڸ� �ȴ��ϰ� (�Ѿ��) ���� ���ڸ� �޴� ���
    dfs(i + 1, sum);

    //sum = sum + ���簪
    dfs(i + 1, sum + arr[i]);
}

int main() {

    cin >> n >> target;
    
    for (int i = 0; i < n; i++)cin >> arr[i];

    answer = 0;
    dfs(0, 0);

    cout << answer;

    return 0;
}