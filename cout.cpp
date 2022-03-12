//cout<<"daddy is very silly";
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,n,a,b;
	cin>>n>>a;
	//n²»Îª0 
	for(i=1;i<=n-1;i++){
		cin>>b;
		if(a>b||a==b){
		}
		else{
			a=b;
		}
	}
	cout<<a;
	return 0;
} 
