//改错：幸运的办公楼
#include<bits/stdc++.h>
using namespace std;
int main(){
	//n:可以容纳n位数字
	//a:每种长度可以有几种号码 
	//ans：总共可以有几种号码 
	//i,j:循环变量 
	int n,a,ans=0,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		a=1; 
		for(j=0;j<i;j++){
			a=a*2;
		}
		ans=ans+a;
		cout<<a<<" "<<ans<<endl; 
	}
	cout<<ans;
	return 0; 
} 
