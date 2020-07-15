#include <iostream>
#include<cmath>
#include<cstring>
#include<vector> 
#include<algorithm>
#define ll long long
#define lli long long int
using namespace std;

int main() {
    int t,count=0; lli n;
    cin>>t;
    while(t--){
        count=0;
        cin>>n;
        while(n>0){
            if(n%10==4) count++;
            n=n/10;
        }
        cout<<count<<"\n";
    }
}
