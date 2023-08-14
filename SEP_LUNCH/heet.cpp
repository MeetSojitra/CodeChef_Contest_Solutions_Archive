#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b = 0;
        cin >> a;
        if (a % 4 == 0)
        {
            cout << "YES" << endl;
            b = 1;
        }
        else
        {
            cout << "NO" << endl;
        }
        if (b == 1)
        {
            cout << 1 << " ";
            for (int i = 1; i < a - 1;)
            {
                if (i % 2 == 0)
                {
                    i = i + 1;
                    cout << i << " ";
                }
                else if (i % 2 != 0)
                {
                    i = i + 3;
                    cout << i << " ";
                }
            }
            cout << endl;
            cout << 2 << " ";
            for (int i = 2; i < a - 1;)
            {
                if (i % 2 == 0)
                {
                    i = i + 1;
                    cout << i << " ";
                }
                else if (i % 2 != 0)
                {
                    i = i + 3;
                    cout << i << " ";
                }
            }
        }
    }

    return 0;
}