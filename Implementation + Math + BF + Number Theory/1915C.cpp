#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll a[n];
        ll sum = 0;
        for(int i = 0; i < n ;i++){
            cin >> a[i];
            sum += a[i];
        }
        ll sr = sqrt(sum);
        if(sr * sr == sum){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
