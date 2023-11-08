#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;
		int ops = 0;
        while (x.length() < n*m && x.find(s) == string::npos) {
            x += x;
            ops++;
        }
        
        if (x.find(s) != string::npos ) {
            cout << ops << endl;
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}
