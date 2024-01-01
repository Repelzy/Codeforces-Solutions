#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n; ++i) {
        int sum_odd = 0, sum_even = 0;
        for (int j = i; j < n; j += 2) {
            sum_odd += a[j];
            if (j + 1 < n) {
                sum_even += a[j + 1];
            }
            if (sum_odd == sum_even) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool ans = check(a);
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}