#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++) {
            cin >> b[i];
        }
        ll ansA = 0;
        ll ansB = 0;
        int round = 0;
        vector<pair<ll, ll>> v(n);
	    for(ll i = 0; i < n; i++){
		    v[i] = {a[i] + b[i], i};
	    }
        sort(v.rbegin(), v.rend());
        for(ll i = 0; i < n; i++){
            if(round%2 == 0){
                a[v[i].second]-=1;
                b[v[i].second] = 0;
            }
            else{
                b[v[i].second]-=1;
                a[v[i].second] = 0;
            }
            round++;
        }
        for(ll i = 0; i < n; i++){
            ansA += a[i];
            ansB += b[i];
        }
        cout << ansA- ansB << endl;
    }
}