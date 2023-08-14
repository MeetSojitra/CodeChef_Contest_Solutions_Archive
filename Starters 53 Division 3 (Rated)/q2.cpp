#include <bits/stdc++.h>
using namespace std;

int main(){
    // int n=7;
    // cout<<n/2;
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long o=n/2;
        long long e=n/2;
        if(n%2!=0){
            o++;
        }
        cout<<2*(o*e)<<endl;
    }
    
    return 0;
}