#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,p,x,y;
        cin>>n>>p>>x>>y;
        int arr[n],sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i <= p-1; i++)
        {
            if (arr[i]==0)
            {
                sum=sum+x;
            }
            else if (arr[i]==1)
            {
                sum=sum+y;
            }
        }
        cout<<sum<<endl;
        
    }

    return 0;
}