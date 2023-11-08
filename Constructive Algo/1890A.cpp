#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	int n;
	while(t--){
		cin >> n;
		map<int,int> mp;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			mp[x]++;
		}
		if(n == 2 || mp.size() == 1) cout << "YES" << endl;
		else if(mp.size() == 2 && (abs(mp.begin()->second - mp.rbegin()->second) <= 1)){
			cout << "YES" << endl;			
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
