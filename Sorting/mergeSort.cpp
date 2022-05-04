#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int beg, int mid, int end)
{
       int i, j, k;
       int n1 = mid - beg + 1;
       int n2 = end - mid;

       int LeftArray[n1], RightArray[n2]; //temporary arrays

       /* copy data to temp arrays */
       for (int i = 0; i < n1; i++)
              LeftArray[i] = a[beg + i];
       for (int j = 0; j < n2; j++)
              RightArray[j] = a[mid + 1 + j];

       i = 0;   /* initial index of first sub-array */
       j = 0;   /* initial index of second sub-array */
       k = beg; /* initial index of merged sub-array */

       while (i < n1 && j < n2)
       {
              if (LeftArray[i] <= RightArray[j])
              {
                     a[k] = LeftArray[i];
                     i++;
              }
              else
              {
                     a[k] = RightArray[j];
                     j++;
              }
              k++;
       }
       while (i < n1)
       {
              a[k] = LeftArray[i];
              i++;
              k++;
       }

       while (j < n2)
       {
              a[k] = RightArray[j];
              j++;
              k++;
       }
}


void mergeSort(int arr[], int l, int r)
{
       if (l < r)
       {
              int mid = (l + r) / 2;
              mergeSort(arr, l, mid);
              mergeSort(arr, mid + 1, r);
              merge(arr, l, mid, r);
       }
}
int main()
{
       int arr[] = {50, 20, 40, 60, 10, 30};

       int n = sizeof(arr) / sizeof(arr[0]);
       mergeSort(arr, 0,n-1);

       for (auto x : arr)
              cout << x << " ";
       return 0;
}
