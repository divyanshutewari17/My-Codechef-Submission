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
    if(n%4==0) cout<<n+1;
    else cout<<n-1;
}
