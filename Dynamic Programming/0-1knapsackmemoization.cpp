#include <bits/stdc++.h>
using namespace std;
int memo[1000][1000];
int knapSack(int W, int wt[], int val[], int n) 
    { 
       if(n==0||W==0)
       {
           return 0;
       }
       if(memo[W][n]!=-1)
       {
              return memo[W][n];
       }
       if(wt[n-1]<=W)
       {
           return memo[W][n]= max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n-1));
       }
       else if(wt[n-1]>W)
       {
           return memo[W][n]=knapSack(W,wt,val,n-1);
       }
    }
    int main()
    {
           int N,W;
           memset(memo,-1,sizeof(memo));
           N = 3;
          W = 4;
         int  values[] = {1,2,3};
          int  weight[] = {4,5,1};
          cout<<knapSack(W,weight,values,N);
    }