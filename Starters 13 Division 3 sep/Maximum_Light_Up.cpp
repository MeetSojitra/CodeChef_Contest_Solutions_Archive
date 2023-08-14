#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--)
    {
        long long p,a,b,c,x,y; 
        cin>>p>>a>>b>>c>>x>>y;
        long long ans = 0;

        long long m = x*a+b;
        ans = max(ans,p/m);
        m = y*a+c;
        ans = max(ans,p/m);
        cout<<ans<<endl;
    }
    
    return 0;
}