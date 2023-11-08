#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	int n;
	while(t--){
		cin >> n;
		int s,e;
		int s_p, e_p;
		bool notOk = false;
		for(int i = 0; i < n; i++){
			cin >> s >> e;
			if(i == 0){
				s_p = s;
				e_p = e;
			}
			else{
				if(s >= s_p && e >= e_p){
					notOk = true;
				}
			}
		}
		if(!notOk && s_p >= 1) cout << s_p << endl;
		else cout << -1 << endl;
	}
	return 0;
}
