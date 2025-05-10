#include<bits/stdc++.h>
using namespace std;


int main()
{
  double x1,x2,x3,x4,y1,y2,y3,y4,z1,z2,z3,z4;
  cout<<"Co Efficients of Eqn 1:";
  cin>>x1>>x2>>x3>>x4;
  cout<<"Co Efficients of Eqn 2:";
  cin>>y1>>y2>>y3>>y4;
  cout<<"Co Efficients of Eqn 3:";
  cin>>z1>>z2>>z3>>z4;
   cout<<"Enter value of y & z:";

  double px=INT_MAX,py=INT_MAX,pz=INT_MAX,x=0,y=0,z=0;
  cin>>y>>z;
  while(abs(px-x)>0.0000001&&abs(py-y)>0.0000001&&abs(pz-z)>0.0000001){
    px=x;
   x=(x4-x3*z-x2*y)/x1;
   py=y;
    y=(y4-y3*z-y1*x)/y2;
    pz=z;
    z=(z4-z2*y-z1*x)/z3; 
  }
  cout<<"x="<<x<<endl;
  cout<<"y="<<y<<endl;
  cout<<"z="<<z<<endl; 
    return 0;
}