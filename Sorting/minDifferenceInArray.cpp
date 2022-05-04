#include <bits/stdc++.h>
using namespace std;
int diff(int arr[], int n)
{
       int res = INT_MAX;
       for (int i = 1; i < n; i++)
       {
              int mins = arr[i] - arr[i - 1];
              res = min(mins, res);
       }
       return res;
}
int main()
{
       int arr[] = {1, 5, 3, 19, 18, 25};

       int n = sizeof(arr) / sizeof(arr[0]);
       sort(arr,arr+n);
      cout<< diff(arr,n);
       return 0;
}
