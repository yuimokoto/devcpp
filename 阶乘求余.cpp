//ื๗าตฃบฝืณหว๓ำเ
#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,i,ans;
	ans=1; 
	cin>>n;
	for(i=1;i<=n;i++){
		ans=ans*i;
		ans=ans%1009;	
	}
	cout<<ans%1009;
	return 0;
}
