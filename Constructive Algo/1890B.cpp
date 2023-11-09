#include <iostream>
#include <string>
using namespace std;

int main() {
    int q;
    cin >> q;
    
    int n, m;
    string s, t;
    
    while (q--) {
        cin >> n >> m;
        cin >> s >> t;
        
        int cnt1 = 0, cnt2 = 0;
        int check = 0;
        
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1])
                cnt1++;
        }
        
        for (int i = 0; i < m - 1; i++) {
            if (t[i] == t[i + 1])
                cnt2++;
        }
        
        if (cnt2 != 0 && cnt1 != 0) {
            cout << "NO" << endl;
        } else if (cnt2 == 0 && cnt1 == 0) {
            cout << "YES" << endl;
        } else if (cnt2 != 0 && cnt1 == 0) {
            cout << "YES" << endl;
        } else {
            for (int i = 0; i < n; i++) {
                if (s[i] == s[i + 1]) {
                    char x = s[i];
                    if (x == t[0] || x == t[m - 1])
                        check++;
                }
            }
            if (check != 0) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
    
    return 0;
}
