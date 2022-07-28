#include <bits/stdc++.h>
using namespace std;
const int r = 4;
void transpose(int arr[r][r])
{
       for (int i = 0; i < r; i++)
       {
              for (int j = i + 1; j < r; j++)
              {
                     swap(arr[i][j], arr[j][i]);
              }
       }
}
int main()
{
       int arr[r][r] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

       transpose(arr);
       for (int i = 0; i < r; i++)
       {
              for (int j = 0; j < r; j++)
              {
                     cout << arr[i][j] << " ";
              }

              cout << endl;
       }

       return 0;
}
