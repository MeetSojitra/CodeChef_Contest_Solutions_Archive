#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while (t--)
    {
        long long x,y;
        cin>>x>>y;
        int val=0;
        if(x!=y){val=2*y+x-y;}
        if(x==y){val=2*y-1+x-y;}
        cout<<val;
    }
    
    return 0;
}