#include <bits/stdc++.h>
using namespace std;
#define r 4
#define c 4
int larg(int arr[], int n)
{
       stack<int> s;
       int tp = 0;
       int res = 0;
       int lg = 0;
       for (int i = 0; i < n; i++)
       {
              while (s.empty() == false && arr[i] <= arr[s.top()])
              {
                     tp = s.top();
                     s.pop();
                     lg = arr[tp] * (s.empty() ? i : (i - s.top() - 1));
                     res = max(res, lg);
              }
              s.push(i);
       }
       while (s.empty() == false)
       {
              tp = s.top();
              s.pop();
              lg = arr[tp] *( s.empty() ? n : (n - s.top() - 1));
              res = max(res, lg);
       }
       return res;
}
int rect(int mat[][c])
{
       int res = larg(mat[0], c);
       for (int i = 1; i < r; i++)
       {
              for (int j = 0; j < c; j++)
              {
                     if (mat[i][j] == 1)
                     {
                            mat[i][j] += mat[i - 1][j];
                     }
              }
              res = max(res, larg(mat[i], c));
       }
       return res;
}

int main()
{
       int mat[][c] = {
           {0, 1, 1, 0},
           {1, 1, 1, 1},
           {1, 1, 1, 1},
           {1, 1, 0, 0},
       };

       cout << "Area of maximum rectangle is " << rect(mat);
}
