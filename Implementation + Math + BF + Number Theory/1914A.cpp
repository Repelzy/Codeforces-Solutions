#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        int cnt= 0;
        for(char c : s){
            mp[c]++;
            int probTime = c-'A' + 1;
            if(mp[c]==probTime) cnt++;
        }
        cout << cnt << endl;
    }
}
