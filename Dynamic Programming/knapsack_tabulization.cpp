#include <bits/stdc++.h>
using namespace std;
int knapSack(int W, int w[], int v[], int n)
{
       int arr[W + 1][n + 1];
       for (int i = 0; i < n + 1; i++)
       {
              arr[i][0] = 0;
       }
       for (int i = 0; i <= W + 1; i++)
       {
              arr[0][i] = 0;
       }
       for (int i = 1; i < n + 1; i++)
       {
              for (int j = 1; j < W + 1; j++)

                     if (w[i - 1] <= j)
                     {
                            arr[i][j] = max(v[i - 1] + arr[i - 1][j - w[i - 1]], arr[i - 1][j]);
                     }
                     else
                     {
                            arr[i][j] = arr[i - 1][j];
                     }
       }
       return arr[n][W];
}
       int main()
       {
              int N, W;

              N = 3;
              W = 4;
              int values[] = {1, 2, 3};
              int weight[] = {4, 5, 1};
              cout << knapSack(W, weight, values, N);
       }