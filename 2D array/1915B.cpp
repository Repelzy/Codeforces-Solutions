#include <iostream>
#include <map>
using namespace std;

int main(){
    int t; cin >> t; 
    while(t--){
        char a[3][3];
        map<char, int>mp;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cin >> a[i][j];
                if(a[i][j] != '?'){
                    mp[a[i][j]]++;
                }
            }
        }
        for(char c : {'A', 'B', 'C'}){
            if(mp[c] != 3){
                cout << c << endl;
                break;
            }
        }
    }
    return 0;
}
