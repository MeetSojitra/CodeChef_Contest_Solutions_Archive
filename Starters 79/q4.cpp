#include <iostream>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if ((x + y) % 3 == 0) {
            cout << "CHEF";
        } 
        else if (x % 2 == 0 && y % 2 == 1) {
            cout << "CHEF";
        } 
        else if (x % 2 == 1 && y % 2 == 0) {
            cout << "CHEFINA\n";
        } 
        else {
            cout << "CHEF\n";
        }
    }
    return 0;
}
