#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        long int n;
        cin>>n;
        double x=pow(0.143*n,n);
        double x1=floor(x)+1;
        if ((x-floor(x))<0.5)
        {
            cout<<floor(x)<<endl;
        }
        else{
            cout<<x1<<endl;
        }
        
    }
    return 0;
}