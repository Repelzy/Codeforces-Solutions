#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> a(n), b(n);
        for(int i = 0; i < n ; i++) cin >> a[i];
        for(int i = 0; i <n ; i++) cin >> b[i];
        int sum = 0;
        int ans = 0;
        int mx = 0;
        for(int i = 0; i < n && i < k; i++){
            sum += a[i];
            mx = max(mx, b[i]);
            ans = max(ans, sum + (k-i-1)*mx);
        }
        cout << ans << endl;
    }
}