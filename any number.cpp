//any number
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,e,ans,n;
	ans=0;
	cin>>n;
	for(a=1;a<10;a++){
		for(b=0;b<10;b++){
			for(c=0;c<10;c++){
				for(d=0;d<10;d++){
					for(e=0;e<10;e++){
						if(a+b+c+d+e==n){
							cout<<a<<b<<c<<d<<e<<endl;
							ans++;	
						}
					}
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
