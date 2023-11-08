#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int l = 0;
	int k;
		cin >> n;
		string s;
		cin >> s;
		int ans = n;
		map<char, int> mp;
		for(int i = 0; i < n; i++){
			mp[s[i]]++;	
			k = mp[s[i]];
			while(mp[s[l]] > 1){
				mp[s[l]]--;
				l++;
			}
			if (k==1){
				ans = i-l+1;	
			}
			else{
				ans = min(ans, i-l+1);
			}
		}
	cout << ans << endl;
	return 0;
}

