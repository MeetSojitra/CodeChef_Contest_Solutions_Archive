#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--)
    {
        string S; 
        cin>>S;
        int ans = 0;
        for (int i = 1; i < S.size(); ++i)
        {
            ans=ans+(S[i]!=S[i-1]);
        }

        if(S[0]=='0')
            ans++;
        cout<<ans<<endl;
    }

    return 0;
}