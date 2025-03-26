#include <iostream>
#include <string>
#include <utility>

using namespace std;

pair<int, int> recursion(string& s, int l, int r, int cnt) {
    cnt++;
    if (l >= r) return { 1, cnt };
    else if (s[l] != s[r]) return { 0, cnt };
    else return recursion(s, l + 1, r - 1, cnt);
}

pair<int, int> isPalindrome(string& s) {
    return recursion(s, 0, s.length() - 1, 0);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;
        pair<int, int> result = isPalindrome(s);
        cout << result.first << " " << result.second << "\n";
    }

    return 0;
}
