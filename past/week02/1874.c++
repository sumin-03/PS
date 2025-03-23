#include <iostream>
#include <deque>
using namespace std;

deque<int> arr;
deque<char> ans;
int n, input, top;

void spush(int num) {
    arr.push_back(num);
    ans.push_back('+');
}

void spop() {
    arr.pop_back();
    ans.push_back('-');
}

void print_ans() {
    while(!ans.empty()) {
        cout << ans.front() << "\n";
        ans.pop_front();
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    top = 0;

    while(n--) {
        cin >> input;
        if(input > top) {
            for(int i = top + 1; i <= input; i++) spush(i);
            spop();
            top = input;
        }
        else {
            if(arr.back() == input) spop();
            else {
                cout << "NO\n";
                break;
            }
        }
    }

    if(n == -1) print_ans();

    return 0;
}