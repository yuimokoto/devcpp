//作业:数列2
#include<bits/stdc++.h>
using namespace std;
int main(){
	//i:循环变量，A的每一项
	//b：B的每一项，初始化为0
	//c：C的每一项
	//n:输入的前n项
	//ans：所求的和 
	int i,b=0,c,n,ans;
	ans=0;
	 cin>>n; 
	//循环执行n次
	for(i=1;i<=n;i=i+1){
		b=b+i;
		c=(b-1)%i;
		ans=ans+c;
        		 
	}
	cout<<ans;
	return 0;	  
}
