#include <iostream>
#include<cstring>
using namespace std;
void str(string s)
{
    int j=1,count=0;
    int n = s.length();
    for(int i=0; i<n-1; i=i+j)
    {
        j=1;
        if(s[i]!=s[i+1])
        {
            j=2;
            count=count+1;
        }
    }
    cout<<count<<endl;
}
int main() {
     int t;
     string s;
     cin>>t;
     for(int i=0;i<t;i++)
     {
         cin>>s;
         str(s);
     }
}
