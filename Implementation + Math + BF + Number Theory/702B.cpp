#include <bits/stdc++.h>
using namespace std;

int n, i, j, x;
map<int, int> mp; 
long long sum;

int main() {
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> x;
		for (j = 0; j < 31; j++) {
			sum += mp[(1 << j) - x];
		}
		mp[x]++;
	}	
	cout << sum << endl;
	return 0;
}
