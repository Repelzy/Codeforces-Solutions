#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int cnt1 = 0;
        int cnt2 = 0;
        int cnt3 = 0;      
        for(int i = 0; i < n; i++){
            if(a[i] < 0){
                cnt1++;
            }
            else if(a[i]==0){
                cnt2++;
            }
            else{
                cnt3++;
            }
        }
        if(cnt2 != 0 || cnt1 % 2 == 1){
            cout << 0 << endl;
        }
        else{
            cout << 1 << endl;
            cout << 1 << " " <<  0 << endl;  
        }
    }
}
