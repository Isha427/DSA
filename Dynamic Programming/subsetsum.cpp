#include <bits/stdc++.h>
using namespace std;
int subset(int n, int s[], int sum)
{
       bool arr[n + 1][sum + 1];
       for (int i = 0; i <= n; i++)
       {
              for (int j = 1; j < sum + 1; j++)
              {
                     arr[0][j] = false;
                     arr[i][0] = true;
              }
       }
       for (int i = 1; i <= n; i++)
       {
              for (int j = 1; j < sum + 1; j++)
              {

                     if (s[i - 1] <= j)
                     {
                            arr[i][j] = ((arr[i][j - s[i - 1]]) || (arr[i - 1][j]));
                     }
                     else
                     {
                            arr[i][j] = arr[i - 1][j];
                     }
              }
       }
       return arr[n][sum];
}

int main()
{
       int N;

       N = 6;
       int sum = 30;
       int set[N] = {3, 34, 4, 12, 5, 2};
       if (subset(N, set, sum))
              cout << "True";
       else
       {

              cout << "false";
       }
}