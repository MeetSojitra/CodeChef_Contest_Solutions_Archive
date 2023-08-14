#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n==0) cout<<"0"<<endl;
        else if (n%3==0)
        {   
            cout<<"0"<<endl;
        }
        
        else 
            cout<<(n/3+1)*3-n<<endl;
    }
    
    return 0;
}