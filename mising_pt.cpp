#include <iostream>
#include<cmath>
#include<cstring>
#include<vector> 
#include<algorithm>
#include<queue>
#define ll long long
#define lli long long int
using namespace std;
void func(int a){
    int n=4*a-1;
    long x[n],y[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
        cin>>y[i];
    }
    long mx=x[0],my=y[0];
    for(int i=1;i<n;i++){
        mx = mx^x[i]; 
        my = my^y[i];
    }
    cout<<mx<<" "<<my<<"\n";
}
int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        func(n);
    }
    
    return 0;
}