//beautiful square
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,n,k; 
	for(n=1;n<=25;n++){
	cin>>k;
	if(k==1){
		if(n%5!=0){
		    x=n/5+1;
		    y=n%5;
	    }
	    else{
		    x=n/5;
		    y=5; 
	    }
	}	
}
	if(x+y<6){
		if((x==1 && y==4)||(x==4 && y==1)){
			cout<<3;
		}
		else{
		cout<<6-x-y;
	}
	}
	if(x+y==6){
		if(x>y){
			cout<<x-y;
		}
		else{
			cout<<y-x;
		}
	}
	if(x+y>6){
		if((x==2 && y==5) || (x==5 && y==2)){
			cout<<3;
		}
		else{
		cout<<x+y-6;
	}
	}
		return 0;
}
