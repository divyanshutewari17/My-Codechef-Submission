#include <iostream>
#include<cmath>
#include<cstring>
#include<vector> 
#include<algorithm>
#include<queue>
#define ll long long
#define lli long long int
using namespace std;


void chess(int k){
    int c=1;
    char a[8][8],ch;
    for(int i=0; i<8;i++){
        for(int j=0; j<8;j++){
            if(i==0 && j==0) ch='O';
            else ch='.';
            a[i][j]=ch;
        }
    }
    a[0][1]=a[1][0]=a[1][1]='X';
    for(int i=0; i<8;i++){
        for(int j=0; j<8;j++){
            if(i+j !=0)
            {   c++;
                if(c<=k){
                    a[i][j]='.';
                    if (i<7) a[i+1][j]='X';
                    if (j<7) a[i][j+1]='X';
                    if (i<7 && j<7) a[i+1][j+1]='X';
                }
                else if(c>k) break;
            }
        }
    }
    for(int i=0; i<8;i++){
        for(int j=0; j<8;j++){
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n";
}
int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        chess(n);
    }
}
