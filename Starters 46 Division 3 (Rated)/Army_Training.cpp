#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n; 
        cin>>n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        int def=0,act=0;
        for (int i = 0; i < n/2; i++)
        {
            def+=(1000-v[i]);
        }
        for (int i = n/2; i < n; i++)
        {
            act+=v[i];
        }
        cout<<def*act<<endl;
    }
    
    return 0;
}
