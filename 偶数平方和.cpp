//例题：偶数平方和
#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n,i,ans;
	cin>>n;
	ans=0;
	for(i=2;i<=n;i=i+2){
	ans=ans+i*i;}
	cout<<ans;
	return 0;
}
