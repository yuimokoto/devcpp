//4536
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,ans;
	for(a=1;a<10;a++){
		for(b=0;b<10;b++){
			for(c=0;c<10;c++){
				for(d=0;d<10;d++){
					if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
						ans++;	
					}
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
