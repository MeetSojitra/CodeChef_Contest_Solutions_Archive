#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, num, q;
        cin >> n >> num >> q;
        int arr[n + 1];
        int cnt = 0;
        bool consis = true;
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < q; i++)
        {
            char pn;
            int m;
            cin >> pn >> m;
            if (consis)
            {
                if (pn == '+')
                    cnt++, arr[m]++;
                else
                    cnt--, arr[m]--;
            }   

            if (arr[m] < 0 || arr[m] > 1 || cnt > num)
                consis = false;
        }

        (consis) ? cout << "Consistent" : cout << "Inconsistent";
        cout << "\n";
    }

    return 0;
}