//��ҵ��ƽ����֮��
#include<bits/stdc++.h>
using namespace std;
int main(){
	int ans,n,i;
	ans=0;
	cin>>n;
	for(i=1;i<=n;i=i+2){
		ans=ans+(i+1)*(i+1)-i*i;	
	}
	cout<<ans;
	return 0;
} 
