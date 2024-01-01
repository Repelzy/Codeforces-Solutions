#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n;
int l[N+1],r[N+1];

bool check(int x){
    int left = 0; int right = 0;
    for(int i = 1; i <= n; i++){
        if(left - x > r[i] || right + x < l[i]){
            return false;
        }
        else{
            left = max(left -x, l[i]);
            right = min(right + x, r[i]);
        }
    }
    return true;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>l[i]>>r[i];
		}
        int lo = 0, hi = 1e9;
        while(lo < hi){
            int m = lo + (hi - lo) / 2;
            if(check(m)){
                hi = m;
            }
            else{
                lo = m + 1;
            }
        }
        cout << lo << endl;
    }
}