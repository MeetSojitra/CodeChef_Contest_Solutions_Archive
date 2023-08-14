#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int x, y, a, b, k;
    cin >> x >> y >> a >> b >> k;
    if ((x + a * k) > (y + b * k))
    {
        cout << "DIESEL" << endl;
    }
    else if ((x + a * k) < (y + b * k))
    {
        cout << "PETROL" << endl;
    }
    else
    {
        cout << "SAME PRICE" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sol;
    }

    return 0;
}