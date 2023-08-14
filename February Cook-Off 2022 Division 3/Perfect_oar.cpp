#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--)
    {
        int n,op; cin>>n>>op;
        vector<int> vec(n);
        for(int i=1; i<n; ++i)
            vec[i] = i;

        vec[0] = n;
        if(op==n)
        {
            for (int i = 0; i < n; ++i)
                cout<<i+1<<" ";

            cout<<endl;
            continue;
        }


        op--;
        int NEXT = 1;
        while(op>0)
        {
            swap(vec[(NEXT+1)%n],vec[NEXT]);
            NEXT++;
            op--;
        }


        for(int x:vec){
            cout<<x<<" ";
        }
        cout<<endl;

    }    
    
    return 0;
}

