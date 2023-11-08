#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n; cin >> n;
	int ans = 0;
	int a[]={100,20,10,5,1};
	for(int i = 0; i < 5; i++){
		ans += n/ a[i];
		n = n % a[i];
	}
	cout << ans << endl;
	return 0;
}

////dp for small input
//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	long long n; cin >> n;
//	int a[]={100,20,10,5,1};
//	vector<long long> dp(n+1, 1e9);
//	dp[0] = 0;
//	for(int i = 0; i < 5; i++){
//		for(int j = a[i]; j <= n; j++){
//			dp[j] = min(dp[j], dp[j - a[i]] + 1);
//		}
//	}
//	cout << dp[n] << endl;
//	return 0;
//}
