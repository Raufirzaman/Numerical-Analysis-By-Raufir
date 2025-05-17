/*#include<bits/stdc++.h>
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
}*/

#include<bits/stdc++.h>
using namespace std;

int main()
{    int n;
    cout << "Enter number of equations: ";
    cin >> n;
    vector<vector<double>> coeff(n, vector<double>(n+1));
    vector<double> x(n, 0);     // Current solution
    vector<double> prev_x(n);   // Previous iteration solution
    
    // Input coefficients
    for (int i = 0; i < n; i++) {
        cout << "Coefficients of Equation " << i+1 << " (including constant term): ";
        for (int j = 0; j <= n; j++) {
            cin >> coeff[i][j];
        }
    }
        cout << "Enter initial values of variables: ";
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
    // Define convergence criterion
    double epsilon = 0.0000001; 
    // Gauss-Seidel iterations
    bool converged = false;
    while (!converged ) {
        // Save previous values
        prev_x = x;
        // Update each variable using the Gauss-Seidel update formula
        for (int i = 0; i < n; i++) {
            double sum = coeff[i][n]; // The constant term    
            for (int j = 0; j < n; j++) {
                if (j != i) {
                    sum -= coeff[i][j] * x[j];
                }
            }   
            x[i] = sum / coeff[i][i];
        }// Check convergence
        converged = true;
        for (int i = 0; i < n; i++) {
            if (abs(x[i] - prev_x[i]) > epsilon) {
                converged = false;
                break;
            }
        }
    } 
        for (int i = 0; i < n; i++) {
            cout << "x" << i+1 << " = " << x[i] << endl;
        }
return 0;
}