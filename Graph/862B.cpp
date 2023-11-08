#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> adj;
vector<bool> visited;
vector<int> color;
int cnt1, cnt2;

void dfs(int u){
    visited[u]=true;
    for(int v : adj[u]){
        if (!visited[v]){
            if(color[u] == 1){
                color[v] = 2;
                cnt2++;
            }
            else{
                color[v] = 1;
                cnt1++;
            }
            dfs(v);
        }
    }
}



int main(){
 	cin >> n;
    adj.resize(n + 1);
    visited.resize(n + 1);	
    color.resize(n+1);
      for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    color[1] = 1;
    cnt1++;
    dfs(1);
    long long ans = 0;
    for(int i = 1; i<=n;i++){
    	if(color[i] == 1){
    		ans += cnt2 - adj[i].size();
		}
	}
	cout << ans << endl;
    

    return 0;
}
