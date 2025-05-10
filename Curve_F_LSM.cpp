#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
cout<<"Enter The Number of points :";
    cin>>n;
    double sumx=0,sumy=0,sumxy=0,sumx2=0;
    for(int i=0;i<n;i++){
        double x,y;
        cout<<"Enter The Point No"<<i+1<<":";
        cin>>x>>y;
        sumx+=x;
        sumy+=y;
        sumxy+=x*y;
        sumx2+=x*x;
    }
    double a0,a1;
    double ma1=sumx/n;
    double ma0=sumx2/sumx;
    a1=(sumxy-sumy*ma1)/(sumx2-sumx*ma1);
    a0 = (sumy - a1 * sumx) / n;
    cout<<"The Equation of the line is : y = "<<a0<<" + "<<a1<<"x"<<endl;


}