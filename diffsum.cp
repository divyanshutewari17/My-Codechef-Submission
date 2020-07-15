#include <iostream>
#include<cmath>
#include<cstring>
#include<vector> 
#include<algorithm>
#define ll long long
#define lli long long int
using namespace std;

int main() {
    int t,n;
    cin>>n;
    cin>>t;
    if(n>t) cout<<n-t;
    else cout<<n+t;
}
