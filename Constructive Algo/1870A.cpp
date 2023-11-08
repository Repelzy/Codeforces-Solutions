#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, k, x;
        cin >> n >> k >> x;
        ll sum = 0;
        if(k>n || k - x > 1) cout << "-1" << '\n';
        else if (k == x){
        	cout << k*(k-1)/2 + (n-k)* (k-1) << '\n';
		}
		else{
			cout << k*(k-1)/2 + (n-k)* x << '\n';
		}
	}
    return 0;
}

