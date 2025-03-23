#include <iostream>

using namespace std;

void recursive(int n, int depth) {
    string indent(depth * 4, '_');

    cout << indent << "\"����Լ��� ������?\"\n";
    
    if(n == 0) {
        cout << indent << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
    }
    else {
        cout << indent << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
        cout << indent << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
        cout << indent << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
        recursive(n - 1, depth + 1);
    }

    cout << indent << "��� �亯�Ͽ���.\n";

    return;
}

int main(void) {
    int num;
    cin >> num;

    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
    recursive(num, 0);

    return 0;
}