#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a%b == 0 || b%a == 0) {
            cout << "YES\n";
            continue;
        }
        int xgcd = __gcd(a, b);
        a /= xgcd;
        b /= xgcd;
        // cout << a << " " << xgcd << " " << b << endl;
        if (xgcd > a)
            swap(a, xgcd);
        // cout << log(a)/log(xgcd) << " " << (int)log(a)/log(xgcd) << endl;
        if (log(a) / log(xgcd) == (int)(log(a) / log(xgcd)))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

// 8 - 2 2 2
// 12 - 2 2 3
// 18 - 2 3 3
//

// 12 - 2 2 3
// 15 - 3 5
//

// 9 - 3 3
// 6 - 2 3

// 