#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int sum=x;
        v.push_back(x);
        for (int i = 0; i < n; i++)
        {
            sum=sum+arr[i];
            v.push_back(sum);
        }
        cout<<*max_element(v.begin(), v.end())<<endl;
       
    }
    
    return 0;
}