#include <bits/stdc++.h>
#define int long long
using namespace std;
int N = 1e18 + 1;

vector<int> powersof2;

void preCompute()
{
    int st = 2;
    while (st < N)
    {
        powersof2.push_back(st);
        st *= 2;
    }

    // reverse(powersof2.begin(), powersof2.end());
}

void solve()
{
    int n;
    cin >> n;
    // long long cnt = 0;
    // while (n > 0)
    // {
    //     if (n % 2 != 0)
    //         n--;
    //     else
    //     {
    //         bool mila = false;
    //         for (int i = 0; i < powersof2.size(); i++)
    //         {
    //             if (n % powersof2[i] == 0)
    //             {
    //                 // cout << powersof2[i] << endl;
    //                 n /= powersof2[i];
    //                 mila = true;
    //                 break;
    //             }
    //         }
    //         if (!mila)
    //             n--;
    //     }
    //     cnt++;
    //     // cout << n << " " << cnt << endl;
    // }

    // // cout << cnt << endl;
    if (n <= 1)
        cout << "Alice\n";
    else
        cout << "Bob\n";
}

int32_t main()
{
    // preCompute();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}