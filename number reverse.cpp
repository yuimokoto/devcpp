//???
#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,k;
	m=0;
	cin>>n;
	if(n==0){
		cout<<0;
	}
	else{
		if(n<0){
			n=n*-1;
			m=1;	
		}
		if(m==1){
			cout<<"-";
		}
		for(k=0;k<9;k++){
			if(n%10==0){
				n=n/10;
			}
		}	
		for(n=n;n>=10;n=n/10){
			cout<<n%10;
		}
		if(n!=0){
			cout<<n;
		}
	}
	return 0;
}
