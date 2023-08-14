#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin>>n;
    int a[n],oi,ei;

    if(n%2==0){
        oi=n/2;
        ei=n/2;
    }
    else{
        oi=n/2+1;
        ei=n/2;
    }

    for (int i = 0; i < n; i++){
        cin>>a[i];
    }

    int odd=0,even=0;
    for (int j = 0; j < n; j++)
    {
        if (a[j]%2==0){  
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<min(oi,even) + min(ei,odd)<<endl;
}

int main(){
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}