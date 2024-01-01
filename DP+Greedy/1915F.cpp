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
        vector<pair<int, bool>> pos(2*n);
        for(int i = 0; i < n; i++) {
            cin >> pos[i*2].first >> pos[i*2+1].first;
            pos[i*2].second = true; // starting position
            pos[i*2+1].second = false; // ending position
        }

        sort(pos.begin(), pos.end());

        int cnt = 0, greetings = 0;
        for(auto p : pos) {
            if(p.second) cnt++;
            else greetings += cnt-1;
        }

        cout << greetings << "\n";
    }

    return 0;
}
