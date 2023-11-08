#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a, a + n);
        if (a[0] != 0) {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 1; i < mp.size(); i++) {
            if (mp[i] > mp[i - 1]) {
                cnt++;
                break;
            }
        }
        if (cnt == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
