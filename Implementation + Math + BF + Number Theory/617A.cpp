#include <bits/stdc++.h>
using namespace std;

int main(){
	int s = 0;
	int x; 
	cin >> x;
	if (x==0) return 0;
	int rem = (x-s) % 5;
	int min_step = (x-s) / 5;
	if ( rem == 0 ){
		cout << min_step << endl;
	}
	else{
		cout << min_step + 1 << endl;
	}
	
	
	return 0;
}
