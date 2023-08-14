#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        // for (int j = 0; j < n; j++)
        // {
        //     cout<<a[j]<<" ";
        // }

        long long sum = 0;
        int st = 0;
        while (true)
        {
            sum += a[st];
            st++;  
            if (sum >= w) break;
        }

        // cout << st << endl;
        cout << n-st << endl;
    }

    return 0;
}