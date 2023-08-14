#include<iostream>
using namespace std;

void solve(){

    int n,a,b;
    cin>>n>>a>>b;
    string s;cin>>s;
    int sum = 0;
    for (int i = 0; i <s.length(); i++)
    {
        if (s[i]=='0')
        {
            sum=sum+a;
        }
        else if (s[i]=='1')
        {
            sum=sum+b;
        }       
    }
    cout<<sum<<endl;
}

int main(){
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}