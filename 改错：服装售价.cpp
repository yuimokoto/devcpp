#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,e,f,i,j,maxn=0;
	cin>>a>>b>>c>>d>>e>>f;
	for(i=1;i<=d;i++){
		j=d-i;
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<i<<" "<<j<<endl;
		if(j>b){
			j=b;
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<i<<" "<<j<<endl;
		}
		if(j>c){
			j=c;
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<i<<" "<<j<<endl;
		}
		if(maxn<i*e+j*f){
			maxn=i*e+j*f;
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<i<<" "<<j<<" "<<maxn<<endl;
		}
	}
	cout<<maxn;
	return 0;
}
