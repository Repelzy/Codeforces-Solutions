#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t; cin >> t; 
    while(t--){
        ll n;
        cin >> n;
        ll cnt = 1;
        while(n>0){
            ll d = n % 10;
            cnt*=(d+1)*(d+2)/2;
            n /= 10;
        }
        cout << cnt << "\n";
    }
}

    // for a = n, b + c = 0 --> a = n, b = 0, c=0;
    // for a = n-1, b+c = 1 --> a = n-1, b = 1, c=0 or b = 0, c = 1
    // for a= n-2, b+c =2 --> a = n-2, b= 1, c= 1, b = 0, c= 2, b = 2, c= 0
    // ...
    // for a = 1, b+c = n-1 --> n combinations
    // for a= 0, b + c = n --> n+1 combinations







