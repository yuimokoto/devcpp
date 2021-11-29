//例题：平方和
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,ans;
	ans=0;
	cin>>n; 
	for(i=1;i<=n;i++){
		ans=ans+i*i*i;
	}
	cout<<ans;
	return 0; 
}

