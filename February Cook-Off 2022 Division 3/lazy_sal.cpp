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
        vector<int> v;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }

        vector<int>::iterator ip;
        std::sort(v.begin(), v.end());

        ip = std::unique(v.begin(), v.begin() + 12);
        v.resize(std::distance(v.begin(), ip));

        int sum=0;
        int i = v.size();int j=1;
        for (; i > 0 && j>0; i--)
        {
            sum=sum+v[i];
            if (sum>=w)
            {
                j=0;
            }
            
        }
        cout<<v.size()-i;
        
    }

    return 0;
}