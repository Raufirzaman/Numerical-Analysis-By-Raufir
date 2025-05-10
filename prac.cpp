#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a,b,sizeof(a));

int main()
{
    optimize();
      int eqn;
      cin>>eqn;
      double emat[eqn][eqn+1];
        double sol[eqn];
        double ratio;
        for(int i=0;i<eqn;i++){
            cout<<"Enter coefficients of equation "<<i+1<<" including constant:";
            for(int j=0;j<=eqn;j++)cin>>emat[i][j];
        
        }

      for(int i=0; i<eqn-1; i++){
        for(int k=i+1; k<eqn; k++){
            ratio = emat[k][i] / emat[i][i];
            for(int j=i; j<=eqn; j++)
                emat[k][j] = emat[k][j] - emat[i][j] * ratio;
        }
    }
        for(int i=eqn-1;i>=0;i--){
            sol[i]=emat[i][eqn];
            for(int j=i+1;j<eqn;j++)sol[i]-=emat[i][j]*sol[j];
            sol[i]/=emat[i][i];
        }
        cout<<"Solution:"<<endl;
        for(int i=0;i<eqn;i++){
            cout<<"x"<<i+1<<": "<<sol[i]<<endl;
        }


    return 0;
}