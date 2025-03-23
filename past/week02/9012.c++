#include <iostream>
#include <string>
#include <queue>
using namespace std;

queue<char> q;
string input;
int t, num, cnt;

int main(void) {
    cin >> t;
    while(t--) {
        cnt = 0;
        cin >> input;
        for(char c : input) q.push(c);
        num = q.size();

        for(int i = 0; i < num; i++) {
            if(q.front() == '(') cnt++;
            else if(q.front() == ')') cnt--;
            if(cnt < 0) break;
            q.pop();
        }
        
        if(cnt == 0) cout << "YES" << "\n";
        else cout << "NO" << "\n";
        while(!q.empty()) q.pop();
    }

    return 0;
}