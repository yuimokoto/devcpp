//all primes
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	for(j=1;j<=n;j++){
		for(i=2;i<n;i++){
			if(j%i==0){
			
			}
			else{
				cout<<j<<",";
			}
		}
	}
}
