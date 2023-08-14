#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    while (n>0)
        {
            if (n==1){
                cout<<"East"<<endl;
            }
            else if (n==2){
                cout<<"South"<<endl;
            }
            else if (n==3){
                cout<<"West"<<endl;
            }
            else if(n==4){
                cout<<"North"<<endl;
            }
        n=n-4;            
        }
}
int main(){
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}