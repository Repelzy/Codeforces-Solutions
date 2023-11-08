#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n; ++i) cin >> a[i];
	vector<bool> dp(360, false);
	dp[0] = true;
	for(int i = 0; i < n; i++){
		vector<bool> check(360, false);
		for(int j = 0; j < 360; j++){
			if(dp[j]){
				check[(j+a[i]) % 360] = true;
				check[(j-a[i] + 360) % 360] = true;
			}
		}
		dp = check;
	}
	if(dp[0]) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}
