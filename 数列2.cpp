//��ҵ:����2
#include<bits/stdc++.h>
using namespace std;
int main(){
	//i:ѭ��������A��ÿһ��
	//b��B��ÿһ���ʼ��Ϊ0
	//c��C��ÿһ��
	//n:�����ǰn��
	//ans������ĺ� 
	int i,b=0,c,n,ans;
	ans=0;
	 cin>>n; 
	//ѭ��ִ��n��
	for(i=1;i<=n;i=i+1){
		b=b+i;
		c=(b-1)%i;
		ans=ans+c;
        		 
	}
	cout<<ans;
	return 0;	  
}
