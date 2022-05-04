#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int l, int r)
{       int p=arr[r];
       int j=l-1;
       for(int i=l;i<=r-1;i++)
       {
           if(arr[i]<=p)
           {
                  j++;
                  swap(arr[i],arr[j]);
           }
       }
       swap(arr[r],arr[j+1]);
       return (j+1);

}
void quickSort(int arr[], int l,int h)
{
       if (l < h)

       {
              int p = partition(arr, l, h);
              quickSort(arr,l,p-1);
              quickSort(arr,p+1,h);


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
