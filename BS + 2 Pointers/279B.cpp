#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int max_books = 0;
    int sum = 0;
    int l = 0, r = 0;
    
    while (r < n) {
        sum += a[r];
        while (sum > t) {
            sum -= a[l];
            ++l;
        }
        max_books = max(max_books, r - l + 1);
        ++r;
    }
    
    cout << max_books << endl;
    
    return 0;
}

