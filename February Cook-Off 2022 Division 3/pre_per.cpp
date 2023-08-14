#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--)
    {
        int x,n; cin>>x>>n;
        int arr[n];

        for(int i=0; i<n; ++i){
            cin>>arr[i];
        }

        vector<int> v;
        int a1 = arr[0];
        while(a1!=0)
        {
            v.push_back(a1);
            a1--;
        }
        
        for (int i = 1; i < n; ++i)
        {
            int tem1 = arr[i];
            while(tem1!=arr[i-1])
            {
                v.push_back(tem1);
                tem1--;
            }
        }

        for (int i = 0; i < v.size(); ++i)
        {
            cout<<v[i]<<" ";
        }

        cout<<endl;
    }  
    return 0;
}