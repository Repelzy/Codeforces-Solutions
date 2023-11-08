#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
    	string s; cin >> s;
    	int cons_a = 0; 
    	int total_a = 0;
    	int min_a = 1e9;
    	for(char c : s){
    		if(c == 'A'){
    			cons_a++;
    			total_a++;
			}
			else{
				min_a = min(min_a, cons_a);
				cons_a = 0;
			}
		}
		min_a = min(min_a, cons_a);
		cout << total_a - min_a << '\n';
	}
    return 0;
}

