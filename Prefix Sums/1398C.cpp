#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	int n;
	while(t--){
		cin >> n;
		string s ;
        cin >> s ;
		vector<int> pref(n+1);
		for(int i = 1 ; i <= n ; i++){
            pref[i] = pref[i-1] + (s[i-1]-'0');
        }
        unordered_map<int, int> pref_count;
        ll good_arrays = 0;
        for(int i = 0; i <= n; i++){
        	int diff = pref[i] - i;
        	good_arrays += pref_count[diff];
        	pref_count[diff]++;
		}
		cout << good_arrays << endl;
	}
	return 0;
}
