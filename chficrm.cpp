#include <iostream>
using namespace std;
void served(int n)
{
    int a[n],flag=0,chef_count=0,price;
    int b[3]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(a[0]!=5)
    {
        flag=1;
    }
    else{
        b[0]=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]==5)
            {
                b[0]=b[0]+1;
            }
            else if(a[i]==10)
            {
               if(b[0]>=1)
               {
                 b[0]=b[0]-1;
                 b[1]=b[1]+1;
               }
               else{
                   flag=1;
               }
            }
            else
            {
                if(b[0]>=2 || b[1]>=1)
                {
                    if(b[1]==0){
                        b[0]=b[0]-2;
                    }
                    else{
                        b[1]=b[1]-1;
                    }
                    b[2]=b[2]+1;
                }
                else{
                    flag=1;
                }
            }
            if(flag == 1){
                break;
            }
        }
        }
    if(flag==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

int main() {
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        served(n);
    }
}
