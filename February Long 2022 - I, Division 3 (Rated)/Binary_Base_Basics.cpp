#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,k,p=0;
        string s;
        cin>>n>>k;
        cin>>s;
        for (int i = 0; i < n/2; i++)
        {
            if (s[i]!=s[n-i-1])
            {
                p++;
            }
        }
        int sol=k-p;
        if ((sol>=0 && sol%1==0) || (sol>=0 && n%2==0))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }

    return 0;
}