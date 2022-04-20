#include <bits/stdc++.h>
using namespace std;
int subset(int n, int arr[] )
{
      
	    int sum=0;
	   for(int i=0;i<n;i++)
	   {
	       sum+=arr[i];
	   }
	  bool dp[n+1][sum+1];
	   for(int i=0;i<n+1;i++)
	   {
	       for(int j=1;j<sum+1;j++)
	       {
	           dp[i][0]=1;
	           dp[0][j]=0;
	       }
	   }
	   for(int i=1;i<n+1;i++)
	   {
	       for(int j=1;j<sum+1;j++)
	       {
	           if(arr[i-1]<=j)
	           {
	               dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
	           }
	           else
	           {
	               dp[i][j]=dp[i-1][j];
	               
	           }
	       }
	   }
	   vector<int>v;
	  
	   for(int k=0;k<=sum/2;k++)
	   {
	       if(dp[n][k]==1)
	       {
	           v.push_back(k);
	       }
	   }
	   int mn=INT_MAX;
	   for(int i=0;i<v.size();i++)
	   {
	       int x=sum-2*v[i];
	       mn=min(mn,x);
	   }
	   return mn;
	   
}

int main()
{
       int N;

       N = 6;
      
       int set[N] = {3, 34, 4, 12, 5, 2};
       cout<<subset(N,set);
}