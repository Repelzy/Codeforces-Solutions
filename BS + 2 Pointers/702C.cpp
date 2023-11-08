#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m; cin >> n >> m;
	vector<int> a(n);
	vector<int> b(m);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int j = 0; j< m; j++){
		cin >> b[j];
	}
	int r = 0, pos = 0;
	for(int i = 0; i < n; i++){
		while(pos < m-1 && abs(a[i]-b[pos]) >= abs(a[i]-b[pos+1])){
			pos++;
		}
		r = max(r, abs(a[i]-b[pos]));
	}
	cout << r << endl;
	return 0;
}

