#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        map<int, int> mp;
        int arr[3];
        for(int i = 0; i < 3; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }
        for(int i = 0; i < 3; i++){
            if(mp[arr[i]]==1){
                cout << arr[i] << endl;
            }
        }
    }
}
