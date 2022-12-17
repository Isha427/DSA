#include <bits/stdc++.h>
using namespace std;
//revise it
int searches(int arr[],int n,int x)
{
       int high=n-1;
       int low=0;
       while(low<=high)
       {
              int mid=(low+high)/2;
              if(arr[mid]==x)
              {
                     return mid;
              }
              if(arr[low]<arr[mid])
              {
                     if(arr[low]<=x && arr[mid]>x)
                     {
                            high=mid-1;
                     }
                     else{
                            low=mid+1;
                     }
              }
              else{
                     if(arr[high]>=x && arr[mid]<x)
                     {
                            low=mid+1;
                     }
                     else{
                            high=mid-1;
                     }
              }
       }
       return -1;
}//o(logn)
int main(){
  
       int arr[] = {3,1};

       int x = 1;
       int n=2;

       cout << searches(arr,n, x);
  return 0;
}
