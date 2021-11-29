//公交车开了多久
#include <bits/stdc++.h>
using namespace std;
int main(){
   //h1:出发的小时数，m1:出发的小时数
   //h2:到达的小时数，m1:到达的小时数
   int h1,h2,m1,m2;
   h1=13;
   h2=17;
   m1=47;
   m2=38ss;
   //从出发到到达的分钟数
   int m=h2*60+m2-h1*60-m1;
   cout<<"公交车从始发站到终点站共用了="<<m/60<<"小时"<<m%60<<"分钟";
   return 0; 
} 
