#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ; cin >> t;
    while(t--){
        int n, d, h ; cin >> n >> d >> h;
        vector<int> y(n);
        for(int i = 0; i < n; i++){
            cin >> y[i];
        }
        long double ans = (long double)d * h / 2.0;
        for (int i = 0; i + 1 < n; ++i) {
            if (y[i + 1] >= y[i] + h) ans += (long double)d * h / 2.0;
            else{
                long double d2 = (long double)d * (y[i] + h - y[i + 1]) / h;
                long double nh = y[i + 1] - y[i];
                ans += (d + d2) / 2.0 * nh;
            }
        }
        cout << fixed << setprecision(9)<< ans << '\n';
    }
    return 0;
}
