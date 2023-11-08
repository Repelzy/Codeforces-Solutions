#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int k = INT_MAX;
		int d,s;
		vector<pair<int,int>> v;
		for(int i = 0; i < n; i++){
			cin >> d >> s;
			v.push_back({d,s});
		}
		for(int i = 0; i < n; i++){
			k = min(v[i].first + ((v[i].second) - 1) / 2, k);
		}
		cout << k << endl;
	}
	return 0;	
}
