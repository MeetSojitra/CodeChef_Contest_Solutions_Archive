#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        if ((a+b)%2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}