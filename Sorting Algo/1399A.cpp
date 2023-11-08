#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	int n; 
	while(t--){
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}	
		sort(a.begin(), a.end());
		vector<int> v;
		if(n==1) 
		{
			cout << "YES" << endl; 
			continue;
		}
		else{
			int diff = 0;
			for(int i = 1; i < n; i++){ 
				diff = abs(a[i] - a[i-1]);
				v.push_back(diff);
			}
		}
		sort(v.begin(), v.end(), greater<int>());
		if(v[0] > 1) cout << "NO" << endl;
		else{
			cout << "YES" << endl;
		}	
	}
	return 0;
}

