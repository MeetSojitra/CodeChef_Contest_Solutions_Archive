#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        vector<vector<int>> v(8,vector<int>(8));
        ////////////////////////////x=0/////////////
        if (x==0 && y==0)
        {
             v={  {1,0,2,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==0 && y==1){
             v={  {0,1,0,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {2,0,2,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==0 && y==2){
             v={  {0,0,1,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,2,0,2,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==0 && y==3){
             v={  {0,0,0,1,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,2,0,2,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==0 && y==4){
             v={  {0,0,0,0,1,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,2,0,2,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==0 && y==5){
             v={  {0,0,0,0,0,1,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,2,0,2,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }else if(x==0 && y==6){
             v={  {0,0,0,0,0,0,1,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,2,0,2},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==0 && y==7){
             v={  {0,0,0,0,0,0,0,1} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,2,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        // **//////////////////////////////x=1
        else if(x==1 && y==0){
             v={  {0,0,2,0,0,0,0,0},
                                    {1,0,0,0,0,0,0,0},
                                    {0,0,2,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==1 && y==1){
             v={  {0,0,0,2,0,0,0,0},
                                    {0,1,0,2,0,0,0,0} ,
                                    {0,0,0,2,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==1 && y==2){
             v={  
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,1,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,2,2,2,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==1 && y==3){
             v={  {0,0,0,0,0,2,0,0} ,
                                    {0,0,0,1,0,0,0,0},
                                    {0,2,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==1 && y==4){
             v={  {0,0,0,0,0,0,2,0} ,
                                    {0,0,0,0,1,0,0,0},
                                    {0,0,2,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==1 && y==5){
             v={  {0,0,0,0,0,0,0,2} ,
                                    {0,0,0,0,0,1,0,0},
                                    {0,0,0,2,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }else if(x==1 && y==6){
             v={  {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,1,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,2,2,2},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==1 && y==7){
             v={  {0,0,0,0,0,2,0,0} ,
                                    {0,0,0,0,0,0,0,1},
                                    {0,0,0,0,0,2,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        ////////////////////////////x=2
        else if(x==2 && y==0){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,2,0,0,0,0,0},
                                    {1,0,0,0,0,0,0,0},
                                    {0,0,2,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==2 && y==1){
             v={  {0,0,2,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0} ,
                                    {0,1,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {2,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==2 && y==2){
             v={  
                                    {0,2,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0} ,
                                    {0,0,1,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,2,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==2 && y==3){
             v={  {0,0,2,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,1,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,2,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==2 && y==4){
             v={  {0,0,0,0,0,2,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,1,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,2,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==2 && y==5){
             v={  {0,0,0,0,0,0,2,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,1,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,2,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }else if(x==2 && y==6){
             v={  {0,0,0,0,0,0,0,2} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,1,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,2,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==2 && y==7){
             v={  {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,0,2,0,0},
                                    {0,0,0,0,0,0,0,1},
                                    {0,0,0,0,0,2,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        //////////////////////x=4
        else if(x==3 && y==0){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,2,0,0,0,0,0},
                                    {1,0,0,0,0,0,0,0},
                                    {0,0,2,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==3 && y==1){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,2,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,1,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {2,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==3 && y==2){
             v={  
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,2,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,1,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,2,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==3 && y==3){
             v={  {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,2,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,1,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,2,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==3 && y==4){
             v={  {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,0,2,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,1,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,2,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==3 && y==5){
             v={  {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,2,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,1,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,2,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }else if(x==3 && y==6){
             v={  {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,2},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,1,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,2,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==3 && y==7){
             v={  {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,2,0,0},
                                    {0,0,0,0,0,0,0,1},
                                    {0,0,0,0,0,2,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        //////////////////////////x=5
        else if(x==4 && y==0){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,2,0,0,0,0,0},
                                    {1,0,0,0,0,0,0,0},
                                    {0,0,2,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==4 && y==1){
             v={  {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,2,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,1,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {2,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==4 && y==2){
             v={  
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,2,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0} ,
                                    {0,0,1,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,2,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==4 && y==3){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,2,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,1,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,2,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==4 && y==4){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,2,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,1,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,2,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==4 && y==5){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,2,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,1,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,2,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }else if(x==4 && y==6){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,2} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,1,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,2,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==4 && y==7){
             v={  {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,2,0,0},
                                    {0,0,0,0,0,0,0,1},
                                    {0,0,0,0,0,2,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        ////////////////////x=6
        else if(x==5 && y==0){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,2,0,0,0,0,0},
                                    {1,0,0,0,0,0,0,0},
                                    {0,0,2,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==5 && y==1){
             v={  {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}                                    ,
                                    {0,0,2,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,1,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {2,0,0,0,0,0,0,0}};
        }
        else if(x==5 && y==2){
             v={  
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,2,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0} ,
                                    {0,0,1,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,2,0,0,0,0}};
        }
        else if(x==5 && y==3){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,2,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,1,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,2,0,0,0}};
        }
        else if(x==5 && y==4){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,2,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,1,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,2,0,0,0,0}};
        }
        else if(x==5 && y==5){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,2,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,1,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,2,0,0,0}};
        }else if(x==5 && y==6){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,2} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,1,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,2,0,0},
                                    };
        }
        else if(x==5 && y==7){
             v={  {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,2,0,0},
                                    {0,0,0,0,0,0,0,1},
                                    {0,0,0,0,0,2,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }       
        ////////////////////x=7
        else if(x==6 && y==0){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,2,0,0,0,0,0},
                                    {1,0,0,0,0,0,0,0},
                                    {0,0,2,0,0,0,0,0}};
        }
        else if(x==6 && y==1){
             v={  {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,2,0,0,0,0},
                                    {0,1,0,2,0,0,0,0},
                                    {0,0,0,2,0,0,0,0}};
        }
        else if(x==6 && y==2){
             v={  
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0} ,
                                    {0,2,0,2,0,0,0,0},
                                    {0,0,0,0,0,0,0,0} ,
                                    {0,0,1,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==6 && y==3){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0} ,
                                    {0,0,2,0,2,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,1,0,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==6 && y==4){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,2,0,2,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,1,0,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }
        else if(x==6 && y==5){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,2,0,2,0},
                                    {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,0,1,0,0},
                                    {0,0,0,0,0,0,0,0}};
        }else if(x==6 && y==6){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,2,0,0,0},
                                    {0,0,0,0,2,0,1,0},
                                    {0,0,0,0,2,0,0,0},
                                    };
        }
        else if(x==6 && y==7){
             v={  {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,2,0,0},
                                    {0,0,0,0,0,0,0,1},
                                    {0,0,0,0,0,2,0,0}};
        }  
              
        ////////////////////x=8
        else if(x==7 && y==0){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,2,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {1,0,0,0,0,0,0,0}};
        }
        else if(x==7 && y==1){
             v={  {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {2,0,2,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,1,0,0,0,0,0,0}};
        }
        else if(x==7 && y==2){
            vector<vector<int>> v{  
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,2,0,2,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,1,0,0,0,0,0}};
        }
        else if(x==7 && y==3){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,2,0,2,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,1,0,0,0,0}};
        }
        else if(x==7 && y==4){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,2,0,2,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,1,0,0,0}};
        }
        else if(x==7 && y==5){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,2,0,2,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,1,0,0}};
        }
        else if(x==7 && y==6){
             v={  {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,2,0,2},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,1,0},
                                    };
        }
        else if(x==7 && y==7){
            v={  {0,0,0,0,0,0,0,0} ,
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,0,0,0},
                                    {0,0,0,0,0,2,0,0},
                                    {0,0,0,0,0,0,0,1}};
        }       
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
    
    return 0;
}