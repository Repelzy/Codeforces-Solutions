#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    ll a[n];
    int cnt = 1; 
    int maxCnt = 1; 

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > a[i - 1]) {
            cnt++;
            maxCnt = max(maxCnt, cnt); 
        } else {
            cnt = 1; 
        }
    }

    cout << maxCnt << endl;
    return 0;
}
