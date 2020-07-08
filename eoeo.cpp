#include <iostream>
using namespace std;
void winner(long ts)
{
    long count;
    while(ts%2 != 1)
    {
        ts=ts/2;
    }
    if(ts==1 || ts==2)
    {
        count=0;
    }
    else
    {
        count = (ts-1)/2;
    }
    cout<<count<<endl;
}
int main() {
  int t;
  long ts;
  cin>>t;
  for(int i=0;i<t;i++)
  {
      cin>>ts;
      winner(ts);
  }
}
