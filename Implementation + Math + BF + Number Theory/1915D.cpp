#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        for(int i = 0; i < n; i++) {
            ans += s[i];
            if(i+2 < n && s[i+1] != 'a' && s[i+1] != 'e' && (s[i+2] == 'a' || s[i+2] == 'e')) {
                ans += '.';
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
