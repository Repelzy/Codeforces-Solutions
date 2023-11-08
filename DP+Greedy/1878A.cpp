#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];

        int maxCount = 0;
        for(int i = 0; i < n; i++){ 
            if(a[i] == k){
                int cnt = 0;
                int j = i;
                while(j < n && a[j] == k){
                	cnt++;
                	j++;
				}
                maxCount = max(maxCount, cnt);
            }
        }

        if(maxCount > 0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}

