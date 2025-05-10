#include<bits/stdc++.h>
using namespace std;
vector<double>one(4),two(4),tri(4),quar(4),penta(4);
double x=1000000,y=100000,z=1000000;
double r=100000;
int main(){
cout<<"Enter coefficients of x,y,z for eqn 1:";
for(int i=0;i<4;i++)cin>>one[i];
cout<<"Enter coefficients of x,y,z for eqn 2:";
for(int i=0;i<4;i++)cin>>two[i];
cout<<"Enter coefficients of x,y,z for eqn 3:";
for(int i=0;i<4;i++)cin>>tri[i];
r=two[0]/one[0];
for(int i=0;i<4;i++)quar[i]=two[i]-one[i]*r;
r=tri[0]/one[0];
for(int i=0;i<4;i++)penta[i]=tri[i]-one[i]*r;
r=penta[1]/quar[1];
for(int i=1;i<4;i++)penta[i]=penta[i]-quar[i]*r;
z=penta[3]/penta[2];
y=(quar[3]-quar[2]*z)/quar[1];
x=(one[3]-one[2]*z-one[1]*y)/one[0];
cout<<x<<" "<<y<<" "<<z<<endl;
}           
              