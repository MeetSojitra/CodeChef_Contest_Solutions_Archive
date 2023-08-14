#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;cin>>t;
    while (t--)
    {
        int f,s;
        cin>>f>>s;
        int pf=100,ps=200;
        pf=pf-(pf*f)/100;
        ps=ps-(ps*s)/100;
        if(pf>ps){
            cout<<"SECOND"<<endl;
        }
        else if (pf==ps)
        {
            cout<<"BOTH"<<endl;
        }
        
        else{
            cout<<"FIRST"<<endl;
        }


    }
    
    return 0;
}