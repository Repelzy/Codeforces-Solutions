#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int cnt = 0;
        string s[n];
        for (int i = 0; i < n; i++) cin >> s[i];
        string target = "vika";
        for(int i = 0; i < m; i++){
        	for(int j = 0; j < n; j++){
        		if (s[j][i] == target[cnt]){
        			cnt++;
        			break;
				}
			}
		}
		if(cnt == 4){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
    return 0;
}

