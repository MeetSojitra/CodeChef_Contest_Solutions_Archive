#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> v,w;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            if (temp!=k)
            {
                v.push_back(temp);
            }
            if (temp>k)
            {
                w.push_back(temp);
            }
        }
        if ((v.size()==m || w.size()==m) || w.size()>=m)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        } 
    }
    
    return 0;
}