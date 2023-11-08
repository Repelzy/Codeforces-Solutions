#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--) {
        long long a, b, n;
        cin >> a >> b >> n;
        vector<long long> x(n);
        for(int i = 0; i < n; i++) {
            cin >> x[i]; 
        }
        long long c = b;
        for(int i = 0; i < n; i++){
        		c += min(a-1, x[i]);
		}
		cout << c << endl;
	}
    return 0;
}

