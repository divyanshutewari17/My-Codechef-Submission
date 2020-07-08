#include <iostream>
#include<cmath>
using namespace std;


void spread4(int a[], int n)
{
    int count=1,x;
    int min=1000;
    int max=0;
    int lc,rc;
    for(int i=0;i<n;i++)
    {
        lc = rc = 0;
        for(int k=i;k>0;k--)
        {
            if(a[k]-a[k-1]<3)
            lc=lc+1;
            else
            break;
        }
        for(int j=i;j<n-1;j++)
        {
            if(a[j+1]-a[j]<3)
            rc = rc+1;
            else
            break;
        }
         count = lc+rc+1;
         if (count<min)
         min=count;
         else if(count>max)
         max=count;
    }
    cout<<min<<" "<<max<<"\n";
}
void corona(int t)
{
    int n;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        spread4(a,n);
    }
}
int main() {
    int t;
    cin>>t;
    
  corona(t);
}
