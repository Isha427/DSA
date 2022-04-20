#include <bits/stdc++.h>
using namespace std;

int subset(int arr[], int sum, int n)
{
       int dp[n + 1][sum + 1];
       for (int i = 0; i < n + 1; i++)
       {
              for (int j = 1; j < sum + 1; j++)
              {
                     dp[i][0] = 1;
                     dp[0][j] = 0;
              }
       }
       for (int i = 1; i < n + 1; i++)
       {
              for (int j = 1; j < sum + 1; j++)
              {
                     if (arr[i - 1] <= j)
                     {
                            dp[i][j] = (dp[i - 1][j - arr[i - 1]]) + (dp[i - 1][j]);
                     }
                     else
                     {
                            dp[i][j] = dp[i - 1][j];
                     }
              }
       }
       return dp[n][sum];
}

int main()
{
       int N;
       int sum=30;
       N = 4;
       
       int set[N] = {10, 30, 15, 5};
       cout<<(subset(set,sum,N));
              
}