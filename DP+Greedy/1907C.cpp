#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    	int maxC = 0;
    	unordered_map<char, int> cnt;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
        	char s;
        	cin >> s;
        	cnt[s] ++;
        	maxC = max(maxC, cnt[s]);
		}
		if(maxC > n/2){
			cout << (2 * maxC - n) << endl;
		}
		else {
			if(n%2 == 1){
				cout << 1 << endl;
			}
			else{
				cout << 0 << endl;
			}
		}
	}
    return 0;
}
