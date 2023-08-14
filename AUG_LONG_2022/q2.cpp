#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;

    if (a == b)
        return a;
  
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}



int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int arr[]={3,7,5,11,13,17,19,23,29,31,37,41,43,47};
        for (int i = 0; i < sizeof(arr);i++)
        {
            if (a==arr[i] || b==arr[i])
            {
                cout<<"NO"<<endl;
                return 0;
            }
            
        }
        
        int t=gcd(a,b);
        a=a/t;
        b=b/t;
         for (int i = 0; i < sizeof(arr); i++)
        {
            if (a%arr[i]==0 || b%arr[i]==0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            
        }
        cout<<"YES"<<endl;
         
        
        
    }
    
    return 0;
}