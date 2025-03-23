#include <iostream>
#include <cmath>    // pow 함수 사용을 위해 추가
#include <iomanip>  // 소수점 출력 포맷을 위해 추가

int main() {
    double probability_per_trial = 0.002;  // 0.002% 확률
    int trials;

    std::cout << "시행 횟수를 입력하세요: ";
    std::cin >> trials;

    if (trials <= 0) {
        std::cout << "시행 횟수는 양수여야 합니다." << std::endl;
        return 1;
    }

    // 실패 확률
    double fail_probability = 1.0 - probability_per_trial;

    // 모든 시행에서 실패할 확률
    double all_fail_probability = pow(fail_probability, trials);

    // 한 번 이상 성공할 확률
    double at_least_one_success = 1.0 - all_fail_probability;

    // 결과 출력 (소수점 8자리까지)
    std::cout << std::fixed << std::setprecision(8);
    std::cout << "적어도 한 번 아이템이 나올 확률은: " << at_least_one_success * 100 << "%" << std::endl;

    return 0;
}
