#include <bits/stdc++.h>
using namespace std;
//peak element=element present at left and right should me smaller than the peak element
// naive
// int peak(int arr[],int n)
// {
//        if(n==1)return arr[0];
//        if(arr[0]>=arr[1])return arr[0];
//        if(arr[n-1]>=arr[n-2])return arr[n-1];
//        for(int i=1;i<n-1;i++)
//        {
//               if(arr[i]>=arr[i-1]&&arr[i]>=arr[i+1])
//               {
//                      return arr[i];
//               }
//        }
// }0(n)
int peak(int arr[],int n)
{
       int low=0;
       int high=n-1;
       while(low<=high)
       {
              int mid=(low+high)/2;
              if((mid==0||arr[mid-1]<=arr[mid])&&(mid==n-1 || arr[mid+1]<=arr[mid]))
              {
                     return arr[mid];
              }
              if(mid>0 && arr[mid-1]>arr[mid] )
              {
                     high=mid-1;
              }
              else{
                     low=mid+1;
              }
       }
}
int main(){
  int arr[] = {1,2}, n = 2;
 cout << peak(arr, n);
  return 0;
}
