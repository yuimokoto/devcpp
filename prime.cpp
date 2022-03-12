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
		cout<<n<<"是合数"; 
	}
	else{
		cout<<n<<"是质数"; 
	}
	return 0; 
}
