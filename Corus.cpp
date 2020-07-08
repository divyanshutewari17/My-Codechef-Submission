#include <iostream>
#include <cstdio>
#include <cmath>
#include<vector>
#include<string.h>
using namespace std;
void ward(string str, int n, int q)
{       
        int ready[26]={0};
        for(int i=0;i<n;i++)
        {
            ready[str[i]-97]++;
        }
        for(int i=0;i<q;i++)
        {
            int c,pending=0;
            cin>>c;
            for(int j=0;j<26;j++)
            {
                if(c<ready[j])
                {
                    pending=pending+ready[j]-c;
                }
            }
            cout<<pending<<"\n";
        }
}
void isolation(int t)
{
    for(int i=0;i<t;i++)
    {
        int n,q;
        cin>>n>>q;
        string str;
        cin>>str;
        ward(str,n,q);
    }
}
int main() {
   int t;
   cin>>t;
   isolation(t);
}
