#include <iostream>
using namespace std;
void demonitise(int s, int n)
{
    int count=0;
    if(s==1){
        count=1;
    }
    else if(s<n && s%2!=0){
        count=2;
    }
    else if(s<n && s%2==0)
    {
        count=1;
    }
    else{
        while(s!=0)
        {
          count= count + s/n;
          s=s%n;
          if(s%2==0 || s==1) n=s;
          else n=s-1;
        }
    }
    cout<<count<<"\n";
}
int main() {
    int t,n,s;
    cin>>t;
    while(t--)
    {
        cin>>s>>n;
        demonitise(s,n);
    }
}
