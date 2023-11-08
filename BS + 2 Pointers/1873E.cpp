#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        long long l = 1; 
		long long r = 1e10;
        while(r - l > 1){
        	long long mid = l + (r - l)/ 2;
        	long long sum = 0;
        	for(int i = 0; i < n; i++){
        			sum += max(mid - a[i], (long long)0);
			}
			if(sum > x) r = mid;	
			else l = mid;
		}
		cout << l << endl;
}
	return 0;
}

