#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >>t;
    while(t--){
        int n;cin >>n;
        int b=1;
        for(int i=1;i<=n;i++){
            int a;cin >>a;
            if(b==a) b++;
            b++;
        }
        cout << b-1<< endl;
    }
}
