#include <iostream>
#include<cmath>
#include<cstring>
#include<vector> 
#include<algorithm>
#define ll long long
#define lli long long int
using namespace std;

int main() {
    int t,n,b,z,sum,rem;
    cin>>t;
    int a[10]={6,2,5,5,4,5,6,3,7,6};
    while(t--)
    {
        cin>>n>>b;
        z=n+b;
        sum=0;
        while(z>0)
        {
            rem=z%10;
            sum = sum+a[rem];
            z=z/10;
        }
        cout<<sum<<"\n";
    }
}
