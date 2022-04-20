#include <bits/stdc++.h>
using namespace std;

int subset(int arr[], int n, int target)
{
      int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        int s1=(sum-target)/2;
        int dp[v.size()+1][s1+1];
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
                if(nums[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
                }
                else
                {
                     dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[v.size()][s1];
}
int main()
{
       int n;

       n = 4;
       int diff = 1;
       int arr[n] = {1,1,2,3};
       cout<<subset(arr, n, diff);
}