#include <bits/stdc++.h>
using namespace std;
struct interval
{
       int s, e;
};
bool mycomp(interval a, interval b)
{
       return a.s < b.s;
}
void mergeIntervals(interval arr[], int n)
{
       int res = 0;
       sort(arr,arr+n,mycomp);
       for (int i = 0; i < n; i++)
       {
              if (arr[res].e > arr[i].s)
              {
                     arr[res].s = min(arr[i].s, arr[res].s);
                     arr[res].e = max(arr[i].e, arr[res].e);
              }
              else
              {
                     res++;
                     arr[res] = arr[i];
              }
       }
       for (int i = 0; i <= res; i++)
              cout << "[" << arr[i].s << ", " << arr[i].e << "] ";
}


int main()
{
     interval arr[] =  { {5,10}, {3,15}, {18,30}, {2,7} }; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    mergeIntervals(arr, n); 
       return 0;
}
