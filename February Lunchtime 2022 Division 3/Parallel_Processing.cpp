#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long arr[n];
        long long sum = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }

        // int prefixSum[n];
        // prefixSum[0] = arr[0];
        vector<long long> v;
        v.push_back(sum);

        for (long long i = 1; i < n; i++)
            arr[i] = arr[i - 1] + arr[i];

        for (long long i = 0; i < n; i++)
        {
            v.push_back(max(arr[i], sum - arr[i]));
        }
        cout << *min_element(v.begin(), v.end()) << endl;
    }

    return 0;
}