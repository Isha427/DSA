#include <bits/stdc++.h>
using namespace std;

int subset(int arr[], int sum, int n)
{
       int dp[n + 1][sum + 1];
       for (int i = 0; i < n + 1; i++)
       {
              for (int j = 1; j < sum + 1; j++)
              {
                     dp[i][0] = true;
                     dp[0][j] = false;
              }
       }
       for (int i = 1; i < n + 1; i++)
       {
              for (int j = 1; j < sum + 1; j++)
              {
                     if (arr[i - 1] <= j)
                     {
                            dp[i][j] = (dp[i - 1][j - arr[i - 1]]) || (dp[i - 1][j]);
                     }
                     else
                     {
                            dp[i][j] = dp[i - 1][j];
                     }
              }
       }
       return dp[n][sum];
}
int equalPartition(int N, int arr[])
{
       long long sum = 0;
       for (int i = 0; i < N; i++)
       {
              sum += arr[i];
       }
       if (sum % 2 != 0)
       {
              return 0;
       }
       else
       {
              return subset(arr, sum / 2, N);
       }
}
int main()
{
       int N;

       N = 4;
       
       int set[N] = {10, 30, 15, 5};
       if (equalPartition(N,set))
              cout << "True";
       else
       {

              cout << "false";
       }
}