#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[3];
    int count = 0;
    while (n--) {
    	int val = 0;
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
            if (a[i] == 1)
                val++;
        }
            if (val >= 2)
            	count++;
    }
    cout << count << " ";

    return 0;
}

