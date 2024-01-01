#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n ;i++) cin >> a[i];
        int res = 1e9;
        int p = 0;
        int idx = -1;
        // inc sec
        for(int i = 0; i < n; i++){
            if(a[i] > a[(i+1)%n]){
                p++;
                idx = (i+1)%n;
            }
        }
        if(p < 2){
            if(idx == 0){
                res = 0;
            }
            res = min(res,min(n-idx, idx + 2));
        }
        // dec seq
        p=0, idx = -1;
        for(int i = 0; i < n; i++){
            if(a[i] < a[(i+1)%n]){
                p++;
                idx = (i+1)%n;
            }
        }
        if(p < 2){
            if(idx == 0){
                res = min(res, 1);
            }
            res = min(res,min(1+(n-idx), 1+idx));
        }
        if(res == 1e9) {
            res = -1;
        }
        cout << res << endl;
    }
}