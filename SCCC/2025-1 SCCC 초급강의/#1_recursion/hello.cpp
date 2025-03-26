#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    //getline
    vector<int> arr;

    //range-based for
    vector<int> v = {1, 3, 5};
    for(int i : v) cout << i << " ";
    cout << "\n";

    //function overloading
    //bits/stdc++.h
    //auto var??

    /*
    재귀함수: 자기 자신을 호출하는 함수
    용도: 점화식계산, 완전탐색, 반복문으로 하기 힘든 작업, 분할정복, 트리탐색 등
    
    주의사항: base-case가 필수! 재귀호출과정에 싸이클이 없어야함

    
    */


    return 0;
}