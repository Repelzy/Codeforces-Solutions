#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> a, b, c;
        for (int i = 0; i < n; i++) {
            int z;
            cin >> z;
            a.push_back(make_pair(z, i));
        }
        for (int i = 0; i < n; i++) {
            int z;
            cin >> z;
            b.push_back(make_pair(z, i));
        }
        for (int i = 0; i < n; i++) {
            int z;
            cin >> z;
            c.push_back(make_pair(z, i));
        }

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());

        int sum = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    if (a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second) {
                        sum = max(sum, a[i].first + b[j].first + c[k].first);
                    }
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
