#include <bits/stdc++.h>
using namespace std;

void solve(){
    int d,l,r; 
    cin>>d>>l>>r;
    if (d<l)
    {
        cout<<"Too Early"<<endl;
    }
    else if (d>r)
    {
        cout<<"Too Late"<<endl;
    }
    else {
        cout<<"Take second dose now"<<endl;
    } 
}
int main(){
    int n; cin>>n;
    while (n--)
    {
        solve();     
    }
    

    return 0;
}