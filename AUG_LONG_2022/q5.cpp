#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    vector<int> v(10);
    for (auto i: v)
    {
        cin >> i;
        v.push_back(i);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}
