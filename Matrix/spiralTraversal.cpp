#include <bits/stdc++.h>
using namespace std;
const int r = 4, c = 4;
void traverseS(int arr[r][c])
{
       int top = 0, left = 0, bottom = r - 1, right = c - 1;
       while (left <= right && top <= bottom)
       {
              for (int i = left; i <= right; i++)
              {
                     cout << arr[top][i] << " ";
              }
              top++;
              for (int i = top; i <= bottom; i++)
              {
                     cout << arr[i][right]<<" ";
              }

              right--;
              if (top <= bottom)
              {
                     for (int i = right; i >= left; i--)
                     {
                            cout << arr[bottom][i] << " ";
                     }
                     bottom--;
              }
              if (left <= right)
              {
                     for (int i = bottom; i >= top; i--)
                     {
                            cout << arr[i][left] << " ";
                     }
                     left++;
              }
       }
}
int main()
{
       int arr[r][c] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
       traverseS(arr);
       return 0;
}
