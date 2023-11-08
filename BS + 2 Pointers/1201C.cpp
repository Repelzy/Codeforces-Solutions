#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int mid = n / 2;
    for(int i = mid+1; i< n;i++){
    	ll diff = v[i] - v[i-1];
    	if(k >= diff*(i-mid)){
    		k -= diff * (i-mid);
    		v[mid] += diff;
		}
		else{
			v[mid] += k/(i-mid);
			k = 0;
			break;
		}	
	}
	if(k>0) v[mid] += k / (n-mid);
	cout << v[mid] << endl;
    
    
    return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
//
//int last_true(int lo, int hi, function<bool(int)> f) {
//	lo--;
//	while (lo < hi) {
//		int mid = lo + (hi - lo + 1) / 2;
//		if (f(mid)) {
//			lo = mid;
//		} else {
//			hi = mid - 1;
//		}
//	}
//	return lo;
//}
//
//int main() {
//	int size;
//	int max_ops;
//	cin >> size >> max_ops;
//	vector<int> arr(size);
//	for (int &i : arr) { cin >> i; }
//
//	sort(arr.begin(), arr.end());
//	// Use 2e9 instead of INT32_MAX to avoid overflow
//	cout << last_true(1, 2e9, [&](int x) {
//		// Returns true if the median can be raised to x
//		long long ops_needed = 0;
//		for (int i = (size - 1) / 2; i < size; i++) {
//			ops_needed += max(0, x - arr[i]);
//		}
//		return ops_needed <= max_ops;
//	}) << endl;
//}

