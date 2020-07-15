#include <iostream>
#include<cmath>
#include<cstring>
#include<vector> 
#include<algorithm>
#define ll long long
#define lli long long int
using namespace std;

int main() {
    int t,n,sum;
    cin>>t;
    while(t--)
    { 
        sum=0;
        cin>>n;
        while(n>0){
           sum=sum+(n*n);
           n=n-2;
        }
        cout<<sum<<"\n";
    }
}
