#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int minI = INT_MAX;
		int index;
		int flag = 1;
		int a[n];
		for(int i = 1; i <= n ;i++){
			cin >> a[i];
			minI = min(minI, a[i]);
		}
		for(int i = 1; i <= n; i++){
			if(minI == a[i]){
				index = i;
				break;
			}
		}
		for(int i = index; i<n; i++){
			if(a[i] > a[i+1]){
				flag =0;
				break;
			}
		}
		if(flag!= 0){
			cout << index-1 << endl;
		}
		else{
			cout << -1 << endl;
		}			
	}
	return 0;
}
