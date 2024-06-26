#include<bits/stdc++.h>
using namespace std;
void code()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
/*3x+20y-z=-18
  2x-3y+20z=25
  20x+y-2z=17
*/

#define   SIZE   10
int main()
{
    //code();
    float a[SIZE][SIZE], x[SIZE], ratio;
    int i,j,k,n;

    /* Setting precision and writing floating point values in fixed-point notation. */
    cout<< setprecision(3)<< fixed;

    /* Inputs */
    /* 1. Reading number of unknowns */
    // cout<<"Enter number of unknowns: ";
    cin>>n;

    /* 2. Reading Augmented Matrix */
    // cout<<"Enter Coefficients of Augmented Matrix: "<< endl;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n+1; j++)
        {
            // cout<<"a["<< i<<"]"<< j<<"]= ";
            cin>>a[i][j];
        }
    }
    /* Applying Gauss Elimination */
    for(i=1; i<=n-1; i++)
    {
        if(a[i][i] == 0.0)
        {
            cout<<"Mathematical Error!";
            exit(0);
        }
        for(j=i+1; j<=n; j++)
        {
            ratio = a[j][i]/a[i][i];

            for(k=1; k<=n+1; k++)
            {
                a[j][k] = a[j][k] - ratio*a[i][k];
            }
        }
    }
    cout << "After That!\n";
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n+1; j++)
        {
            // cout<<"a["<< i<<"]"<< j<<"]= ";
            cout << a[i][j] <<" ";
        }
        cout << endl;
    }

    /* Obtaining Solution by Back Substitution Method */
    x[n] = a[n][n+1]/a[n][n];

    for(i=n-1; i>=1; i--)
    {
        x[i] = a[i][n+1];
        for(j=i+1; j<=n; j++)
        {
            cout <<"x[j]: "<<x[j]<<endl;
            x[i] = x[i] - a[i][j]*x[j];
        }
        x[i] = x[i]/a[i][i];
    }

    /* Displaying Solution */
    cout<< endl<<"Solution: "<< endl;
    for(i=1; i<=n; i++)
    {
        cout<<"x["<< i<<"] = "<< x[i]<< endl;
    }

    return(0);
}
