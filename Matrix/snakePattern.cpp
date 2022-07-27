#include <bits/stdc++.h>
using namespace std;
const int r = 4, c = 4;
void printSnake(int arr[r][c])
{
       for (int j = 0; j < r; j++)
       {
              if (j % 2 == 0)
              {
                     for (int i = 0; i < c; i++)
                     {
                            cout << arr[j][i] << " ";
                     }
              }
              else
              {
                     for (int i = c - 1; i >= 0; i--)
                     {
                            cout << arr[j][i] << " ";
                     }
              }
       }
}
int main()
{
       int arr[r][c] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

       printSnake(arr);
       return 0;
}
