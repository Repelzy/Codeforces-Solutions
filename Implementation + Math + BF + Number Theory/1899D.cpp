#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t; 
	int n;
	while(t--){
		cin >> n;
		ll a;
		ll ans = 0;
		map<ll,ll> mp;
		for(int i = 1; i <= n; i++){
			cin >> a;
			ans += mp[a];
			mp[a]++;
		}
		ans += mp[1] * mp[2];
		cout << ans << endl;
	}
	return 0;
}
