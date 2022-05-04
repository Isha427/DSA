#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
       for (int i = 0; i <= n - 1; i++)
       {
              int mins = i;
              for (int j = i + 1; j <= n - 1; j++)
              {
                     if (arr[j] < arr[mins])
                     {
                            mins = j;
                     }
              }
              swap(arr[mins], arr[i]);
       }
}
int main()
{
       int arr[] = {5, 0, 2, 4, 3, 9, 1};
       int n = 7;
       bubbleSort(arr, n);
       for (int i = 0; i < n; i++)
       {
              cout << arr[i] << " ";
       }
       return 0;
}
