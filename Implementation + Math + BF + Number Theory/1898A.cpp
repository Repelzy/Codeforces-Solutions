#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	int j;
	while(t--){
		int n,k; cin >> n >> k;
		string s; cin >> s;
		int cnt = 0;
		for(int i = 0; i < n; i++){
			if(s[i] == 'B') cnt++;
		}
		if(cnt == k) cout << 0 << endl;
		else if (cnt > k){
			int i = 0;
			for( j = 0; j < n; j++){
				if(s[j]== 'B') i++;
				if(cnt - i ==k) break; 
			}
			cout << 1 << endl << j+1 << " " << 'A' << endl;
		}
		else{
			int i = 0;
			for(j= 0; j < n; j++){
				if(s[j] == 'A')i++;
				if(cnt + i == k) break;
			}
			cout << 1 << endl << j+1 << " " << 'B' << endl;
		}
	}
	return 0;
}

