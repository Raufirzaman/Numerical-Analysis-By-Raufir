#include<bits/stdc++.h>
using namespace std;
double f(double a ,vector<double>& m,vector<char>& t,vector<double>& po,int p){double r=0;
for(int i=0;i<p;i++){
    if(t[i]=='s')r+=(m[i]*pow(sin(a),po[i]));
    else if(t[i]=='c')r+=(m[i]*pow(cos(a),po[i]));
    else if(t[i]=='t')r+=(m[i]*pow(tan(a),po[i]));
else if(t[i]=='0')r+=(m[i]*pow(1/tan(a),po[i]));
else if(t[i]=='e')r+=(m[i]*pow(1/cos(a),po[i]));
else if(t[i]=='o')r+=(m[i]*pow(1/sin(a),po[i]));
else if(t[i]=='x')r+=(m[i]*pow(a,po[i]));
else r+=m[i];
}
return r;
    
} 
int main(){cout<<"Total Parts of Equation: ";int p;cin>>p;
vector<double> m(p),po(p);
vector<char> t(p);
cout<<"Enter coefficients from low to high:";
for(int i=0;i<p;i++)cin>>m[i];
cout<<"Enter type of function from low to high:";
for(int i=0;i<p;i++)cin>>t[i];
cout<<"Enter power of function from low to high:";
for(int i=0;i<p;i++)cin>>po[i];
double a,b;
cout<<"Enter the range of a and b:";
cin>>a>>b;
double temp=0,x=10000;

if(f(a,m,t,po,p)*f(b,m,t,po,p)<0){
    while(abs(x-temp)>0.001){temp=x;
    cout<<"f(a): "<<f(a,m,t,po,p)<<endl;
cout<<"f(b): "<<f(b,m,t,po,p)<<endl;
x=(f(b,m,t,po,p)*a-f(a,m,t,po,p)*b)/(f(b,m,t,po,p)-f(a,m,t,po,p));
cout<<x<<endl;
if(f(a,m,t,po,p)*f(x,m,t,po,p)<0)b=x;
else a=x;}
}
if(x==10000)cout<<"No root found";
else cout<<"Root: "<<x;}
