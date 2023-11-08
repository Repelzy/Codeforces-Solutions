#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];
        vector<int> a;
        a.push_back(b[0]);
        for (int i = 1; i < n; i++) {
            a.push_back(b[i]);
            if (b[i] < b[i-1]) {
                a.push_back(b[i]);
            }
        }
        cout << a.size() << endl;
        for (int x : a) cout << x << " ";
        cout << endl;
    }
    return 0;
}

