#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
	ios_base::sync_with_stdio(0); 
	cin.tie(0);
    int t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        
        vector<ll> a(n);
        vector<ll> b(n);
        
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        ll ans1 = a[0] * n, ans2 = b[0] * n;
        for(ll i = 0; i < n; i++){
        	ans1 += b[i];
        	ans2 += a[i];
		}
		cout << min(ans1, ans2) << endl;
    }
    return 0;
}
