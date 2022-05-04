#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[], int n)
{
       for (int i = 1; i < n; i++)
       {
              int ele = arr[i];
              int j = i - 1;
              while (j >= 0 && arr[j] > ele)
              {

                     arr[j + 1] = arr[j];
                     j--;
              }
              arr[j + 1] = ele;
       }
}
int main()
{
       int arr[] = {50, 20, 40, 60, 10, 30};

       int n = sizeof(arr) / sizeof(arr[0]);
       insertion(arr, n);

       for (auto x : arr)
              cout << x << " ";
       return 0;
}
