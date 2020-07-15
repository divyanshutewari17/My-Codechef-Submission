#include <iostream>
#include<cmath>
#include<cstring>
#include<vector> 
#include<algorithm>
#define ll long long
#define lli long long int
using namespace std;

int main() {
    int t,n,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>b;
        if(n<b) cout<<"<"<<"\n";
        else if(n>b) cout<<">"<<"\n";
        else cout<<"="<<"\n";
        
    }
}
