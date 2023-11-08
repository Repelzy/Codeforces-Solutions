#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	string s;
	int x = 0;
	while(t--){
		cin >> s;
		if(s == "X++" || s == "++X"){
			x++;
		}
		if(s == "X--" || s == "--X"){
			x--;
		}
	}
	cout << x << endl;
}
