#include <iostream>
using namespace std;
void price(int n, int k)
{
    int a[n];
    int sum1=0, sum2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum1= sum1+a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>k){
            a[i]=k;
        }
        sum2=sum2+a[i];
    }
    cout<<sum1-sum2<<endl;
}
int main() {
    int t,n,k;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        price(n,k);
    }
}