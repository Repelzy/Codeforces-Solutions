#include<bits/stdc++.h>
using namespace std;
int n,x,y,cnt=0;
int main(){
	cin>>n>>y; n--;
	while(n--){cin>>x;if(x!=y)cnt++;y=x;}
	cout<<cnt+1;
}
