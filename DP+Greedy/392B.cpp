#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define po pop_back()
 
const int mx = 4*1e5+100;

ll n,t[4][4],dp[41][4][4];

void input(){
	for(int i=1;i<=3;i++)
		for(int j=1;j<=3;j++)
			cin >> t[i][j];
	cin >> n;
}

void solve(){
	for(int a=1;a<=n;a++)
		for(int i=1;i<=3;i++)
			for(int j=1;j<=3;j++)
				dp[a][i][j] = min(dp[a-1][i][i^j]+t[i][j]+dp[a-1][i^j][j] , 2*dp[a-1][i][j]+t[i][i^j]+dp[a-1][j][i]+t[i^j][j]);
}

void output(){
	cout << dp[n][1][3] << endl;
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
	input();
	solve();
	output();
	return 0;
}

