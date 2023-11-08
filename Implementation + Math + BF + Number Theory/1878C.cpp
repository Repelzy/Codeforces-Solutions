#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        long long x;
        cin >> n >> k >> x;
        long long sum = (long long)k * (k + 1) / 2;
        long long maxSum = (long long)k * (2*n - k + 1) / 2;
        if(x >= sum && x <= maxSum) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

