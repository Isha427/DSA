#include <bits/stdc++.h>
using namespace std;
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
int main(){
   int arr[r][c] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

       transpose(arr);
       for(int i=0;i<r;i++)
       {
             int low=0,high=r-1;
             while(low<=high)
             {
              swap(arr[low][i],arr[high][i]);
             }
             low ++;
             high--;
       }
       for(int i=0;i<r;i++)
       {
              for(int j=0;j<c;j++)
              {
                     cout<<arr[i]<<" ";
              }
       }
       

  return 0;
}
