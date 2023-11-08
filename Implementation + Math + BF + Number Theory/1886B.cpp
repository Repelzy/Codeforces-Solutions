#include <bits/stdc++.h>
using namespace std;

double dist(double x,double y,double x1,double y1){
	return sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
} 

int main(){
    int t; cin >> t;
    while(t--){
        int px, py, ax, ay, bx, by;
    	cin >> px >> py >> ax >> ay >> bx >> by;
    	double pa = dist(px, py, ax, ay), pb = dist(px, py, bx, by);
    	double oa = dist(0, 0, ax, ay), ob = dist(0, 0, bx, by);
    	double ab = dist(ax, ay, bx, by);
    	double ans = 1e9;
    	ans = min(ans, max(pa, oa));
    	ans = min(ans, max(pb, ob));
    	ans = min(ans, max({ab / 2, pa, ob}));
    	ans = min(ans, max({ab / 2, pb, oa}));
        cout << setprecision(15) << fixed << ans << endl;
    }
}
