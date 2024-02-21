#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a,b; cin >> a >> b;
        int sum = 0; 
        sum = a+b;
        if(sum % 2){
            cout << "Alice" << endl;
        }
        else{
            cout << "Bob" << endl;
        }
    }
}