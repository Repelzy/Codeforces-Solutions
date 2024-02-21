#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        map<ll, ll> m;
        m[0] = 1;
        ll s = 0;
        bool found = false;
        for (int i = 0; i < n; i++) {
            a[i] *= ((i % 2) ? -1 : 1);
            s += a[i];
            if (m[s]) {
                cout << "YES\n";
                found = true;
                break; 
            }
            m[s]++;
        }
        if (!found) {
            cout << "NO\n";
        }
    }
    return 0;
}
