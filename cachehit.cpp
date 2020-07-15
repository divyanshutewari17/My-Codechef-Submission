#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t!=0)
   {
       int n,b,m,x,k = 0,p,c = -1,i;
       cin>>n>>b>>m;
       for(i=0;i<m;i++)
       {
           cin>>x;
           p = x/b;
           if(p!=c)
           {
               k++;
               c = p;
           }
       }
       cout<<k<<"\n";
       t--;
   }
    return 0;
}
