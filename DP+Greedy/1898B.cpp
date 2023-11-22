#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		long long a[n];
		long long cnt = 0;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = n- 2; i >= 0; i--){
			long long x = (a[i] + a[i+1] - 1)/ a[i+1];
			cnt += x-1;
			a[i] = a[i] / x;
		}
		cout << cnt << endl;
}
	return 0;
}
