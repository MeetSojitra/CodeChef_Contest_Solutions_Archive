#include <bits/stdc++.h>
using namespace std;

long long b1[200002];
long long b2[200002];
long long B1=0;
long long B2=0;

void fu_1(long long x,long long y){
    b1[B1]=x;
    B1++;
    b1[B1]=y;
    B1++;
}
void fu_2(long long x,long long y){
    b2[B2]=x;
    B2++;
    b2[B2]=y;
    B2++;
}
int main()
{
    long long t;
    cin >> t;
    while(t--){
        B1=0;
        B2=0;
        
        long long c1 = 0;
        long long c2 = 0;
        
        long long n;
        cin >> n;
        long long a[n];
        long long A[n];
        
        long long Y1=0,Y=2;
        long long y1=0,y=0;
        
        long long odch =0;
        for(long long i=0; i<n ;i++){
            cin>>a[i];
            A[i]=a[i];
        }
                    
        if(a[0]%2==0)
        {
            if(a[1]%2==0){                
                for(long long i=2;i<n;i++){
                    if(a[i]%2==1){
                        Y1=a[i];
                        y1=i;
                        odch = 1;
                        
                        a[1] = a[1]^Y1;
                        c1++;
                        fu_1(1,y1);
                        break;
                    }
                }                
            }
            else{
                Y1=a[1];
                y1=1;
                odch = 1;
            }

            Y=a[1];
            y=1;
            
            for(long long i =2;i<n;i++){
                if(a[i]%2==1){
                    a[i]=a[i]^Y;
                    c1++;
                    fu_1(i,y);
                }
                i++;
                if(i<n){
                    if(a[i]%2==0){
                        a[i]=a[i]^Y;
                    c1++;
                    fu_1(i,y);
                    }
                }
            }
            A[0]=A[0]^Y1;
            c2++;
            fu_2(0,y1);
            
            Y=A[0];
            y=0;
            
            for(long long i=1;i<n;i++){
                if(A[i]%2==1){
                    A[i]=A[i]^Y;
                    c2++;
                    fu_2(i,y);
                }
                i++;
                if(i<n){
                    if(A[i]%2==0){
                        A[i]=A[i]^Y;
                        c2++;
                        fu_2(i,y);
                    }
                }
            }  
        }
        else{
            odch = 1;
            Y=A[0];
            y=0;
            for(long long i=1;i<n;i++){
                if(a[i]%2==1){
                    a[i]=a[i]^Y;
                    c1++;
                    fu_1(i,y);
                }
                i++;
                if(a[i]%2==0 && i<n){
                    a[i]=a[i]^Y;
                    c1++;
                    fu_1(i,y);
                }
            }
            
            Y = A[0];
            y=0;
            
            for(long long i=1;i<n;i++){
                if(A[i]%2==0){
                    A[i]=A[i]^Y;
                    c2++;
                    fu_2(i,y);
                }
                i++;
                if(A[i]%2==1 && i<n){
                    A[i]=A[i]^Y;
                    c2++;
                    fu_2(i,y);
                }
            }
            
            A[0]=A[0]^A[1];
            c2++;
            fu_2(0,1);   
        }
        if(odch==0){
            cout<<"-1"<<endl;
        }
        else if(c1>c2){
            long long j;
            cout<<c2<<"\n";
            for(long long i=0;i<c2;i++){
                j=i*2;
                cout<<b2[j]+1<<" "<<b2[j+1]+1<<"\n";
            }
        }
        else{
            int j;
            cout<<c1<<"\n";
            for(long long i=0;i<c1;i++){
                j=i*2;
                cout<<b1[j]+1<<" "<<b1[j+1]+1<<"\n";
            }
        }
            
        }
        
      return 0;  
}