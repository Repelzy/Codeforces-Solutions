#include <bits/stdc++.h>
using namespace std;

int main(){
	string expr, arr;
	cin >> expr;
	for(int i = 0; i < expr.size(); i++){
		if (expr[i] != '+'){
			arr.push_back(expr[i]);
		}
	}
	sort(arr.begin(), arr.end());
	cout << arr[0];
	for(int i = 1; i < arr.size(); i++){
		cout << "+" << arr[i];
	}
	return 0;
}
