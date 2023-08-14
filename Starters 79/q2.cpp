#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=n/2;i>0;i--){
            v.push_back(i);
        }
        for(int i=n/2+1;i<=n;i++){
            v.push_back(i);
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
    

    return 0;
}