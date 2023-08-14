#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        if (n-1 == k) {
            cout << -1 << "\n";
        } else {
            vector<int> arr;
            for (int i = 1; i<n+1; i++) arr.push_back(i);
            int i = 0;
            while (i<n-k-1) {
                swap(arr[i], arr[i+1]);
                i++;
            }

            for (int i = 0; i<n; i++) {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}

// 1 2 3 4
// 4-2-1