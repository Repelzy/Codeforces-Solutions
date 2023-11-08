#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	int n;
	while(t--){
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		if(n&1){
			cout << 4 << endl;
			cout << 1 << " " << n << endl;
			cout << 2 << " " << n << endl;
			cout << 1 << " " << 2 << endl;
			cout << 1 << " " << 2 << endl;
 		}
 		else{
 			cout << 2 << endl;
 			cout << 1 << " " << n << endl;
 			cout << 1 << " " << n << endl;
		 }
	}
	return 0;
}
