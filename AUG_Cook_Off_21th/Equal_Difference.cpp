#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    while (a--)
    {
        long long n; cin>>n;
        unordered_map<long long,long long> m;
        for(int i=0;i<n;i++){
            long long t; cin>>t;
            m[t]++;
        }
        if(n==1 || n==2){
            cout<<0<<endl;
        }
        else{
            long long maxi=0;
        for(auto i : m) maxi=max(maxi,i.second);
        cout<<n-max(maxi,(long long)2)<<endl;}
    }
    return 0;
}


