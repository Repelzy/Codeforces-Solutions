#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	int n;
	while(t--){
		int s1 = INT_MAX, s2 = INT_MAX, s12 = INT_MAX;
		cin >> n;
		for(int i = 0; i < n; i++){
			int mi;
			string si;
			cin >> mi >> si;
			if(si[0] == '1' && si[1] == '1'){
				s12 = min(s12, mi);
			}
			else if(si[0] == '1'){
				s1 = min(s1, mi);
			}
			else if(si[1] == '1'){
				s2 = min(s2, mi);
			}
		}
		if(s1 != INT_MAX && s2 != INT_MAX){
    		cout << min(s12, s1+s2) << endl;
		}
		else if(s12 != INT_MAX){
    		cout << s12 << endl;
		}			
		else{
    		cout << -1 << endl;
		}
	}
	return 0;
}
