#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int sum=0;
    sum=sum+min(a,b);
    if (a>=b)
    {
        a=a-b;b=0;
    }
    else if (b>=a)
    {
        b=b-a;a=0;
    }
    sum=sum+min(b,c);
    if (c>=b)
    {
        c=c-b;b=0;
    }
    else if (b>=c)
    {
        b=b-c;c=0;
    }
    
    
    if (sum>=n)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
    

}

int main(){
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}