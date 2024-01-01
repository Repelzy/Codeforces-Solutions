#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int cntB = 0, cntb = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == 'B') {
                cntB++;
                s[i] = '.';
            } else if (isupper(s[i]) && cntB > 0) {
                s[i] = '.';
                cntB--;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == 'b') {
                cntb++;
                s[i] = '.';
            } else if (islower(s[i]) && cntb > 0) {
                s[i] = '.';
                cntb--;
            }
        }
        for (int i = 0; i < n; i++) {
            if (s[i] != '.') cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}
