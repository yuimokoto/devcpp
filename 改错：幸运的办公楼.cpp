//�Ĵ����˵İ칫¥
#include<bits/stdc++.h>
using namespace std;
int main(){
	//n:��������nλ����
	//a:ÿ�ֳ��ȿ����м��ֺ��� 
	//ans���ܹ������м��ֺ��� 
	//i,j:ѭ������ 
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
