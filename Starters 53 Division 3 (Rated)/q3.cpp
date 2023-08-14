#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long sum = 0;
        long long y = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            sum+=(a[i]-b[i]);
            y+=abs(a[i]-b[i]);
        }
        
        if(sum!=0){
            cout<<"-1"<<endl;
        }
        else if (y % 2 != 0 )
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << y/2<< endl;
        }
    }

    return 0;
}