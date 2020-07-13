#include <iostream>
#include<cmath>
#include<cstring>
#include<vector> 
#include<algorithm>
#define ll long long
#define lli long long int
using namespace std;
void skipcounter(int n){
    int a[n];
    long sum=0;
    for(int i=0;i<n;i++) 
        cin>>a[i];
    for(int i=0;i<n-1;i++){
        if(a[i-1]>a[i] || a[i-1]<a[i])
            sum= sum+ (abs(a[i+1]-a[i]) - 1); 
 
    }
    cout<<sum<<"\n";
}

int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        skipcounter(n);
    }
    return 0;
}
