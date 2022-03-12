//homework6
#include<bits/stdc++.h>
using namespace std;
int main(){
	//i:循环变量
	//n:输入的前n
	//ans：控制i的变量 
	int i,n,ans;
	ans=1;
	cin>>n;
	
	for(i=0;i<n;i++){
		ans=ans+i;
		cout<<ans<<endl;
	}
	return 0;	
}
