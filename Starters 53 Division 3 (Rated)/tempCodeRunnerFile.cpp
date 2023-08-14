#include <bits/stdc++.h>
using namespace std;

int main(){
    // int n=7;
    // cout<<n/2;
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n%2==0){
            cout<<n*(n/2);
        }
        else
        {
            cout<<(n/2)*(n/2-1);
        }
        cout<<endl;
        
    }
    
    return 0;
}