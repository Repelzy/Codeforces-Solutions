#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> black_cells;
        for(int i = 0; i < n; ++i) {
            if(s[i] == 'B') {
                black_cells.push_back(i);
            }
        }

        if(black_cells.empty()) {
            cout << 0 << "\n";
            continue;
        }

        int ans = 1, cnt = 0;
        for(int i = 1; i < black_cells.size(); ++i) {
            cnt += black_cells[i] - black_cells[i-1];
            if(cnt >= k) {
                ans++;
                cnt = 0;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}

