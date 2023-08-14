#include <bits/stdc++.h>
using namespace std;

int setBitNumber(int n)
{
    if (n == 0)
        return 0;
 
    int msb = 0;
    n = n / 2;
    while (n != 0) {
        n = n / 2;
        msb++;
    }
 
    return (1 << msb);
}

void solve(){
    int n;cin>>n;
    int s = posOfRightMostSameBit(n,n-1);
    cout<<pow(2,s-1)<<endl; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t;
    // cin>>t;
    cout<<posOfRightMostSameBit(7,16);
    // while (t--)
    // {
    //     solve();
    // }
    
    return 0;
}