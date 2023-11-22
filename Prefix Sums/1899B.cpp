#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n,ansMax=-1;
        ll sum = 0;
        cin >> n;
        ll a[n];
        vector<ll> pref(n+1);
		pref[0] = 0;
		for (ll i = 1; i <= n; i++) {
    		cin >> a[i];
    		pref[i] = pref[i-1] + a[i];
		}
        for (ll i = 1; i <= n; i++) {
        	vector<ll> s;
            if (n % i == 0) {
                for (ll j = i; j <= n; j+=i) {
                    sum = pref[j] - pref[j-i];
                    s.push_back(sum);
                }
                sort(s.begin(), s.end());
                ansMax = max(ansMax, s[s.size()-1] - s[0]);
            }
        }
        cout << ansMax << endl;
    }
    return 0;
}
