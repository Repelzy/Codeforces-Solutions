#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for(int v=0; v<n; v++) cin >> x[v];
    for(int j=0; j<n; j++) cin >> y[j];

    double max_squared = 0;
    for(int i = 0 ;i<n; i++){
        for(int j = i+1 ; j<n; j++ ){
            int x_dis = x[i] - x[j];
            int y_dis = y[i] - y[j];
            int square = x_dis * x_dis + y_dis * y_dis;
			 
            if(square > max_squared){
            	max_squared = square;
			}
        }
    }
    cout << (int)max_squared << endl;

    return 0;
}

