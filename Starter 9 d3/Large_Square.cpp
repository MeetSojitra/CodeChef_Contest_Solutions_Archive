#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,a;
        cin>>n>>a;
        int ans=int(sqrt(n))*a;
        cout<<ans<<endl;

    }
    
    return 0;
}