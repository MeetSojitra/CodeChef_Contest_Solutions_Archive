#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    int tane = 0, jane = 0, pachi = 0, ccc = 0;
    for(int i=0; i<n ; i++)
    {
        if (s[i] == '1' && t[i] == '1')
            tane++;
        else if (s[i] == '1')
            pachi++;
        else if (t[i] == '1')
            jane++;
        else
            ccc++;
    }

    int cnt = 0;
    cnt += min(tane, ccc);
    tane = max(0, tane - ccc);

    int one = min(pachi, jane);
    pachi -= one;
    jane -= one;

    cnt += one;
    one = min(tane, max(pachi, jane));
    cnt += one;
    tane = max(0, tane - one);

    cnt += tane/2;
    cout << cnt << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
