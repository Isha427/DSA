#include <bits/stdc++.h>
using namespace std;

int subset(int arr[], int n, int diff)
{
       int sum = 0;
       for (int i = 0; i < n; i++)
       {
              sum += arr[i];
       }
       int s1 = (sum + diff) / 2;
       int dp[n + 1][s1 + 1];
       for (int i = 0; i < n + 1; i++)
       {
              for (int j = 1; j < s1 + 1; j++)
              {
                     dp[i][0] = 1;
                     dp[0][j] = 0;
              }
       }
       for (int i = 1; i < n + 1; i++)
       {
              for (int j = 1; j < s1 + 1; j++)
              {
                     if (arr[i - 1] <= j)
                     {
                            dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
                     }
                     else{
                            dp[i][j]=dp[i-1][j];
                     }
              }

       }
       return dp[n][s1];
}
int main()
{
       int n;

       n = 4;
       int diff = 3;
       int arr[n] = {1,1,1,1};
       cout<<subset(arr, n, diff);
}