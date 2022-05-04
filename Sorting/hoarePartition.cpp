#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int l, int r)
{
       int i = l - 1;
       int h = r + 1;
       int p = arr[l];
       while (true)
       {
              do
              {
                     i++;
              } while (arr[i] < p);
              do
              {
                     h--;
              } while (arr[h] > p);
              if (i >= h)
              {
                     return h;
              }
              swap(arr[i], arr[h]);
       }
}
void quickSort(int arr[], int l,int h)
{
       if (l < h)

       {
              int p = partition(arr, l, h);
              quickSort(arr,0,l);
              quickSort(arr,l+1,h);


       }
}
int main()
{
       int arr[] = {50, 20, 40, 60, 10, 30};

       int n = sizeof(arr) / sizeof(arr[0]);
       quickSort(arr, 0, n - 1);

       for (int i = 0; i < n; i++)
              cout << arr[i] << " ";
       return 0;
}
