#include <bits/stdc++.h>
using namespace std;
int main()
{ int arr[] = {5,0,6,2,3}, n = 5;
    int res=0;
    int lmax[n],rmax[n];

     lmax[0] = arr[0], rmax[n-1] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(lmax[i - 1], arr[i]);
    }
    for (int i = n-2; i >=0; i--)
    {
        rmax[i] = max(lmax[i +1], arr[i]);
    }
    for(int i=1;i<n-1;i++)
    {
      res=res+(min(lmax[i],rmax[i])-arr[i]);
    }
    cout<<res;

    return 0;
}