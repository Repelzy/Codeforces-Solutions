//#include <bits/stdc++.h>
//using namespace std;
//#define ll long long
//
//int main(){
//	int t; cin >> t;
//	while(t--)
//	{
//		ll n; cin >> n;
//		ll a[n];
//		for(int i = 0; i < n; i++) cin >> a[i];
//		ll sum = a[0];
//		ll par = abs(a[0]) % 2;	
//		ll maxAns = sum;
//		for(int i = 1; i < n; i++){
//			if(abs(a[i]) % 2 != par){
//				sum += a[i];
//			}
//			else{
//				sum = a[i];
//			}
//			if(a[i] > sum) sum = a[i];
//			par = abs(a[i]) % 2;
//			maxAns = max(maxAns, sum);
//		}
//		cout << maxAns << endl;
//	}
//}


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        vector<int> dp(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        dp[0] = a[0];
        for (int i = 1; i < n; i++) {
            if ((abs(a[i]) % 2) == (abs(a[i - 1]) % 2)) dp[i] = a[i];
            else {
                dp[i] = max(dp[i - 1] + a[i], a[i]);
            }
        }
        sort(dp.begin(), dp.end());
        cout << dp[n - 1] << endl;
    }
    return 0;
}

