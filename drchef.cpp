#include <iostream>
#include<cmath>
#include<cstring>
#include<vector> 
#include<algorithm>
#include<queue>
#define ll long long
#define lli long long int
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--){
        int x;
        cin>>n>>x;
        int a[n];
        for(int i =0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int i=0,count=0;
        while(i<n && 2*a[i]<x){
            i++;
            count++;
        }
        while(i<n){
            count++;
            if(x<a[i]){
                x=x*2;
                continue;
            }
            else{
                x=a[i];
                i++;
                x=2*x;
            } 
        }
        cout<<count<<"\n";
    }
    
    return 0;
}