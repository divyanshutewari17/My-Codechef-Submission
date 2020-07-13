#include <iostream>
#include<cmath>
#include<cstring>
#include<vector> 
#include<algorithm>
#define ll long long
#define lli long long int
using namespace std;

void cards(int n){
    int a[n],b[n],ac,bc,aw=0,bw=0;
    for(int i=0;i<n;i++){
        ac=0,bc=0;
        cin>>a[i]>>b[i]; 
        if(a[i]>=10){
            while(a[i]>0){
                ac=ac+(a[i]%10);
                a[i]=a[i]/10;
            }
            a[i]=ac;
        }
        
        if(b[i]>=10){
            while(b[i]>0){
                bc=bc+(b[i]%10);
                b[i]=b[i]/10;
            }
            b[i]=bc;
        }
    }
    
    for(int i=0;i<n;i++){
        if(a[i]>b[i]) aw++;
        else if(b[i]>a[i]) bw++;
        else{
            aw++;
            bw++;
        }
    }
    if(aw>bw) cout<<0<<" "<<aw<<"\n";
    else if(aw<bw) cout<<1<<" "<<bw<<"\n";
    else cout<<2<<" "<<bw<<"\n";
}
int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cards(n);
    }
}
