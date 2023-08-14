#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int od = 0;
    for(int i=0;i<n;i++)
    {
        if (arr[i] % 2)
            od++;
    }

    if (od) {
        cout << 0 << endl;
    }

    else{
        int mi = INT32_MAX;
        for(int i=0;i<n;i++){
            mi = min(mi,(int)log2(arr[i]&(~(arr[i]-1))));
        }
        cout << mi << endl;}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        sol();   
    }
}

