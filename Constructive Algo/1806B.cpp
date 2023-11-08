#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	int n;
	while(t--){
		cin >> n;
		int a[n];
		int cnt0 = 0;
		int cnt1 = 0;
		int cnt = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == 0){
				cnt0++;
			}
			else if(a[i] == 1){
				cnt1++;
			}
		}
		if(cnt0 <= (n+1)/2){
			cout << 0 << endl;
		}
		else if(cnt1 + cnt0 == n && cnt1 > 0){
			cout << 2 << endl;
		}
		else{
			cout << 1 << endl;
		}
	}	
	return 0;
}
