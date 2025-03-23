#include <iostream>
#include <cmath>    // pow �Լ� ����� ���� �߰�
#include <iomanip>  // �Ҽ��� ��� ������ ���� �߰�

int main() {
    double probability_per_trial = 0.002;  // 0.002% Ȯ��
    int trials;

    std::cout << "���� Ƚ���� �Է��ϼ���: ";
    std::cin >> trials;

    if (trials <= 0) {
        std::cout << "���� Ƚ���� ������� �մϴ�." << std::endl;
        return 1;
    }

    // ���� Ȯ��
    double fail_probability = 1.0 - probability_per_trial;

    // ��� ���࿡�� ������ Ȯ��
    double all_fail_probability = pow(fail_probability, trials);

    // �� �� �̻� ������ Ȯ��
    double at_least_one_success = 1.0 - all_fail_probability;

    // ��� ��� (�Ҽ��� 8�ڸ�����)
    std::cout << std::fixed << std::setprecision(8);
    std::cout << "��� �� �� �������� ���� Ȯ����: " << at_least_one_success * 100 << "%" << std::endl;

    return 0;
}
