#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >>n;
    int arrA[n/2],arrB[n/2];
    if ((n/2)%2==0)
    {
        cout<<"YES"<<endl;
    }
    else if ((n/2)%2!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    

    for (int i = 1; i <= n/4; i++)
    {
        arrA[i-1]=i;
    }
    int k=n/4;
    for (int i = n; i > n-n/4; i--)
    {
        arrA[k]=i;
        k++;
    }
    int j=n/4+1;
    for (int i = 0; i < n/2; i++)
    {
        arrB[i]=j;
        j++;
    }
    
    
    for (int i = 0; i < n/2; i++)
    {
        cout<<arrA[i]<<" ";
    }
    cout<<endl;
   
    for (int i = 0; i < n/2; i++)
    {
        cout<<arrB[i]<<" ";
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