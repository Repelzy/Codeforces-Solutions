#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N,X; cin >> N >> X;
	vector<int> v(N);
	int min = 0;
	for(int i = 0; i < N; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int j = 0;
	for(int i = 0; i < N; i++){
		if(min + v[i] <= X){
			min += v[i];
			j++;
		}
		else{
			break;
		}
	}
	cout << j << endl;
	return 0;
}

