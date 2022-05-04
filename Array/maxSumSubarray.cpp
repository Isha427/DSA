#include <bits/stdc++.h>
using namespace std;
void max(int arr[], int n)
{
       int maxend = arr[0];
       int res = arr[0];
       
       for (int i = 1; i < n; i++)
       {
            
              maxend = max(maxend + arr[i], maxend);

              res = max(res, maxend);
             
       }
       cout<<res;
}
int main()
{
       int arr[] = {-99,-4,0,-2};
       int n = sizeof(arr) / sizeof(arr[0]);
       max(arr, n);
       return 0;
}
