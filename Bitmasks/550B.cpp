#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n,l,r,x; cin >> n >> l >> r >> x;
	vector<int> c(n);
	for(int i = 0; i < n; i++){
		cin >> c[i];
	}	
	ll ans = 0;
	for(int i = 0; i < (1<<n); i++){
		int total = 0;
		int min_total = INT_MAX;
		int max_total = INT_MIN;
		for(int j = 0; j < n; j++){
			if(i & (1<<j)){
				total += c[j];
				min_total = min(min_total, c[j]);
				max_total = max(max_total, c[j]);
			}
		}
		if(l <= total && total <= r && (max_total - min_total >= x)){
			ans++;
		}	
	}

	cout << ans << endl;
	return 0;
}
