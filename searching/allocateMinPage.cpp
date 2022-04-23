#include <bits/stdc++.h>
using namespace std;
int feasible(int arr[], int n, int k, int mid)
{
       int sum = 0, req = 1;
       for (int i = 0; i < n; i++)

       {
              if (sum + arr[i] > mid)

              {
                     req++;
                     sum = arr[i];
              }
              else
              {
                     sum += arr[i];
              }
       }
       return (req <= k);
}
int minpage(int arr[], int n, int k)
{
       int sum = 0;
       int mx = 0;
       for (int i = 0; i < n; i++)
       {
              sum += arr[i];
              mx = max(mx, arr[i]);
       }
       int high = sum;
       int low = mx;
       int res = 0;
       while (low <= high)
       {
              int mid = (low + high) / 2;
              if (feasible(arr, n, k, mid))
              {
                     res = mid;
                     high = mid - 1;
              }
              else
              {
                     low = mid + 1;
              }
       }
}
int main()
{
       int arr[] = {10, 20, 10, 30};
       int n = sizeof(arr) / sizeof(arr[0]);
       int k = 2;

       cout << minpage(arr, n, k);
       return 0;
}
