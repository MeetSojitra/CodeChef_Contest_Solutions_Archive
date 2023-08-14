#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int m=arr[0];
        int c=0;
        for(int i=1;i<n;i++){
            if(arr[i]>m){
                m=arr[i];
            }
        }
        if(n==2){
            if(arr[0]!=arr[1]){
                c=1;
            }
            else{
                c=0;
            }
        }
        int j=0;
        if(n>2){
            while(j<n-1){
                if(arr[j]+arr[j+1]==m){
                    arr[j+1]=m;
                    c++;
                    j++;  
                }
                else if(arr[j]==m){
                    j++;
                }
                else if(arr[j]+arr[j+1]<m && arr[j]<m && arr[j+1]<m){
                    arr[j+1]=arr[j]+arr[j+1];
                    c++;
                    j++;
                }   
                else if(arr[j]+arr[j+1]>m && arr[j]<m && arr[j+1]<m){
                    arr[j+1]=arr[j]+arr[j+1];
                    c++;
                    j++;
                }
            }
        }
        cout<<c<<endl;
    }
      return 0;
  }