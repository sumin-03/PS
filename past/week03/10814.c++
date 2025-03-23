#include <iostream>
#include <string>

using namespace std;

struct member{
    int age;
    std::string name;
};

int n;
member members[100000];

//O(N^2) 정렬 알고리즘들은 100000^2의 복잡도를 갖기 때문에
//O(N log N) 정렬 알고리즘을 사용해야함
// 또 나이가 같으면 가입순으로 출력해야하기 때문에 안정 정렬인 merge sort 사용
void merge(member m[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    member L[n1], R[n2];

    for(int i = 0; i < n1; i++) L[i] = m[left + i];
    for(int i = 0; i < n2; i++) R[i] = m[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while(i < n1 && j < n2) {
        if(L[i].age <= R[j].age) m[k++] = L[i++];
        else m[k++] = R[j++];
    }

    while(i < n1) m[k++] = L[i++];
    while(j < n2) m[k++] = R[j++];
}

void mergeSort(member m[], int left, int right) {
    if(left >= right) return;

    int mid = left + (right - left) / 2;

    mergeSort(m, left, mid);
    mergeSort(m, mid + 1, right);

    merge(m, left, mid, right);
}

int main(void) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> members[i].age >> members[i].name;
    }

    mergeSort(members, 0, n - 1);

    for(int i = 0; i < n; i++) {
        cout << members[i].age << " " << members[i].name << "\n";
    }

    return 0;
}