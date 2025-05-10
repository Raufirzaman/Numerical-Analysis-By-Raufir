#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of equations:";
    cin>>n;
    
    double matrix[n][n+1]; // Changed to n+1 columns (augmented matrix)
    double sol[n]; // Size should match number of equations
    double r;
    
    for(int i=0;i<n;i++){
        cout<<"Enter coefficients of equation "<<i+1<<" including constant:"; // Better prompt
        for(int j=0;j<=n;j++) // Loop through all n+1 columns
            cin>>matrix[i][j];
    }

    // Forward elimination
    for(int i=0;i<n-1;i++){     
        for(int j=i+1;j<n;j++){
            r=matrix[j][i]/matrix[i][i];
            for(int k=i;k<=n;k++) // Start from column i, no need to modify already zeroed elements
                matrix[j][k]=matrix[j][k]-matrix[i][k]*r;
        }
    }
    
    // Back substitution
    for(int i=n-1;i>=0;i--){
        sol[i] = matrix[i][n]; // Last column is the constant term
        for(int j=i+1;j<n;j++){ // Use n, not hardcoded 3
            sol[i] -= matrix[i][j] * sol[j];
        }
        sol[i] /= matrix[i][i];
    }
    
    // Print solutions
    cout << "Solution:" << endl;
    for(int i=0;i<n;i++){
        cout<<"x"<<i+1<<": "<<sol[i]<<endl;
    }
    
    return 0;
}