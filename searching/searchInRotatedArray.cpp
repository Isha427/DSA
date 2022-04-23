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
  
       int arr[] = {100, 200, 10, 20, 30,40};

       int x = 100;
       int n=6;

       cout << searches(arr,n, x);
  return 0;
}
