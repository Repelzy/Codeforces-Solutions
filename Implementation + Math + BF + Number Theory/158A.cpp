#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k; cin >> n >> k;
	vector<int> a(n);
	int ans = 0;
	for(int i = 0; i < n;i++) cin >>a[i];
	int kth_score = a[k-1]; // get the k-th score in 1-indexing
	for(int i = 0; i < n; i++){
		if(a[i] > 0 && a[i] >= kth_score) ans++; // only count scores that are positive and not less than the k-th score
	}
	cout << ans << endl;
	return 0;
}

