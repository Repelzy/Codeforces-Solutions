#include <iostream>
#include <string>
using ll = long long;
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        bool check = false;
        for (int i = 0; i <= 3; i++) {
            for (int j = 0; j <= 3; j++) {
                for (int k = 0; k <= 3; k++) {
                    if (i + j + k > 3) continue;
                    if (a % (i + 1) == 0 && b % (j + 1) == 0 && c % (k + 1) == 0 && a / (i + 1) == b / (j + 1) && b / (j + 1) == c / (k + 1)) {
                        check = true;
                    }
                }
            }
        }
        if (check) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
