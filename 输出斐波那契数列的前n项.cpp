//cout fibonacci 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,ans1,ans2,ans3;
	ans1=1;
	ans2=1;
	cin>>n;
	cout<<"1,1,";
	//每一次都循环输出计算好的ans3 
	for(i=3;i<=n;i++){
		ans3=ans2+ans1;
		cout<<ans3<<",";
		ans1=ans2;
		ans2=ans3;
	}
	return 0;
}
