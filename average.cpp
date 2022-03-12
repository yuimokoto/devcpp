//average
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,n,a;
	float ans;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a;
		ans=ans+a;
	}
	cout<<ans/n;
	return 0;
}
