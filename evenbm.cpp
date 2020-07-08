#include <iostream>
#include<cmath>
using namespace std;

void matrix(int n)
{
    int mat[n][n]={0};
    double z = pow(n,2);
    int v=1,k=2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)%2==0 && (i+j)<=z)
            {
                mat[i][j]= v;
                v=v+2;
            }
            else if((i+j)<=z)
            {
                mat[i][j]=k;
                k=k+2;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        matrix(n);
    }
}
