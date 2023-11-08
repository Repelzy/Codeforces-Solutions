#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5+10;
const int inf = 1e9;
long long val[maxn][11],dp[maxn][11];

int main(){
    ios::sync_with_stdio(false);
    int n,m,k;
    cin>>n>>m>>k;
    
    for(int i = 0; i <= maxn; i++){
    	for(int j = 0; j < 11; j++){
    		dp[i][j] = -inf;
		}
	}
	dp[0][k-1] = 0;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> val[j][i];
		}
	}
	for(int i = 1; i <= m; i++){
		sort(val[i] + 1, val[i] + n + 1);
		reverse(val[i] + 1, val[i] + n + 1);
		for(int j = 0; j < k; j++){
			long long sum = 0;
			for(int x = 0; x <= k;x++){
				sum += val[i][x];
				if(j+x-1 >= 0 && j+x-1 < k){
					dp[i][j+x-1] = max(dp[i][j+x-1], dp[i-1][j] + sum);
				}
			}
		}
	}
    cout << dp[m][0] << endl;
    return 0;
}
