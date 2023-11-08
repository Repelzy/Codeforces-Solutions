#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll mask[51];

void solve(){
    int n;
    cin >> n;
    set<int> s;
    memset(mask, 0, sizeof(mask));
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        while(k--){
            int j;
            cin >> j;
            mask[j] |= 1ll << i;
            s.insert(j);
        }
    }
    int res = 0;
    for(int i = 1; i <= 50; i++){
        if(mask[i]){
            int count = 0;
            for(int j = 1; j <= 50; j++){
                if(mask[j] && (mask[i] & mask[j]) == mask[j])
                    count++;
            }
            res = max(res, int(s.size()) - count);
        }
    }
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
