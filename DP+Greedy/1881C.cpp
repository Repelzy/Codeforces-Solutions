#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<vector<char>> s(n, vector<char>(n));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> s[i][j];
            }
        }
        int res = 0;
        for (int i = 0; i < n / 2; i++) {
            for(int j = i; j < n-i-1; j++){
                char c = max({s[i][j], s[n-j-1][i], s[n-1-i][n-j-1], s[j][n-i-1]});
                res += c - s[i][j] + c - s[n-j-1][i] + c - s[n-1-i][n-j-1] + c - s[j][n-i-1];
            }
        }
        cout << res << endl;
    }
    return 0;
}
