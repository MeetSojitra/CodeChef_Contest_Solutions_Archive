#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(int x,int y)
{
    
    int c=0;
    while(x<y)
    {
        if(x%2==0)
        {
            cout<<(((y+1-x)/2)+c)<<endl;
            return;
        }
        else
        {
            int first;
            for(int i=3;i<=x;i++)
            {
                if(x%i==0)
                {
                    first=i;
                    break;
                }
            }
            x+=first;
        }
        c++;
    }
    cout<<c<<endl;

}

int32_t main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        solve(x,y);
    }
    
    return 0;
}