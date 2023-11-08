#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
      cin >> b[i];
    }
    int tot_a = 0;
    int tot_b = 0;
    for (int i = 0; i < n; i++) {
      tot_a ^= a[i];
    }
    for (int i = 0; i < m; i++) {
      tot_b |= b[i];
    }
    int ma = tot_a;
    int minI = 0;
    for (int i = 0; i < n; i++) {
      minI ^= (a[i] | tot_b);
    }
    cout << min(minI, ma) << ' ' << max(minI, ma) << '\n';
  }
  return 0;
}
