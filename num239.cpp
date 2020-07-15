#include <iostream>
using namespace std;

int main() 
{
    int t,l,r,count;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>l>>r;
        count=0;
        for(int j=l;j<=r;j++)
        {
            if((j%10==2)||(j%10==3)||(j%10==9))
            {
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
