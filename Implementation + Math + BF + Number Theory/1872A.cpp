// logic: check the target then find the need amount
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--){
		int a,b,c; cin >> a >> b >> c;
		double total = a+b;
		double target = total / 2;
		if(a > target){
			double need = a - target;
			cout << ceil(need/c) << '\n';
		}
		else if(b > target){
			double need = b - target;
			cout << ceil(need/c) << '\n';
		}
		else{
			cout << 0 << '\n';
		}
	}

	return 0;
}
