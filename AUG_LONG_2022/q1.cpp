#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        priority_queue<long long, vector<long long>, greater<long long>> p;
        for (auto it : v)
        {
            p.push(it);
        }
        while (y > 0)
        {
            int mn = p.top();
            if ((mn ^ x) < mn)
            {
                if (y % 2 == 0)
                {
                    break;
                }
                else
                {
                    p.pop();
                    p.push(mn ^ x);
                    break;
                }
            }
            else
            {
                p.pop();
                p.push(mn ^ x);
                y--;
            }
        }
        int i = 0;
        while (!p.empty())
        {
            v[i] = p.top();
            p.pop();
            i++;
        }
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
