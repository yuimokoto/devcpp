//prime
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,flag;
	flag=0;
	cin>>n;
	for(i=2;i<n;i++){
		if(n%i==0){
			flag=1;
		}
	}
	if(flag==1){
		cout<<n<<"�Ǻ���"; 
	}
	else{
		cout<<n<<"������"; 
	}
	return 0; 
}
