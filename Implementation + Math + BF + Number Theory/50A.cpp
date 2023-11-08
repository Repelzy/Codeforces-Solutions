#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m ; cin >> n >> m;
	int dix = n * m;
	float a = dix / 2;
	if (dix % 2){
		cout << a << endl;
	}
	else{
		cout << floor(dix / 2) << endl;
	}
	
	
	return 0;
}
