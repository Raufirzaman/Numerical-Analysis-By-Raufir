#include<bits/stdc++.h>
using namespace std;
double f(double a){double r=10*pow(a,4)-69*pow(a,3)+64*a-64;
    return r;}
int main()
{double a,b;
    cin>>a>>b;
    double temp=0,x=10000;
    if(f(a)*f(b)<0){
        while(abs(x-temp)>0.0001){
    temp=x;
    x=(a+b)/2;
    cout<<x<<endl;
    if(f(x)*f(a)<0)b=x;
    else a=x;}}
    if(x==10000)cout<<"Range Wrong"<<endl;
    else cout<<"Root:"<<x<<endl;}
