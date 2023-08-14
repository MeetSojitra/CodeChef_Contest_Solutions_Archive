#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long l,r;
    cin>>l>>r;
    cout<<r/3-l/3+(l%3==0)<<"\n"; 
}

int main(){
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}