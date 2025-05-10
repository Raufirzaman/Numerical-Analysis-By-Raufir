#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of points: ";
    cin >> n;

    vector<double>x(n),y(n);
    double sumx=0,sumx2=0,sumx3=0,sumx4=0;
    double sumy=0,sumxy=0,sumx2y=0;

    for (int i = 0; i < n; i++) {
        cout<<"Enter point " << i + 1 << " (x y): ";
        cin>>x[i]>>y[i];
        sumx+=x[i];
        sumx2+=x[i]*x[i];
        sumx3+=x[i]*x[i]*x[i];
        sumx4+=x[i]*x[i]*x[i]*x[i];
        sumy+=y[i];
        sumxy+=x[i]*y[i];
        sumx2y+=x[i]*x[i]*y[i];
    }
    double D=n*(sumx2*sumx4-sumx3*sumx3)-sumx*(sumx*sumx4-sumx2*sumx3)+sumx2*(sumx*sumx3-sumx2*sumx2);
    double D0=sumy*(sumx2*sumx4-sumx3*sumx3)-sumx*(sumxy*sumx4-sumx3*sumx2y)+sumx2*(sumxy*sumx3 -sumx2*sumx2y);
    double D1=n*(sumxy*sumx4-sumx3*sumx2y)-sumy*(sumx*sumx4-sumx2*sumx3)+sumx2*(sumx*sumx2y-sumxy*sumx2);
    double D2=n*(sumx2*sumx2y-sumxy *sumx3)-sumx*(sumx * sumx2y-sumxy * sumx2)+sumy*(sumx*sumx3-sumx2*sumx2);
    double a0=D0/D;
    double a1=D1/D;
    double a2=D2/D;

    cout << "The equation of the best fit quadratic is:\n";
    cout << "y = " << a0 << " + " << a1 << "x + " << a2 << "x^2" << endl;

}