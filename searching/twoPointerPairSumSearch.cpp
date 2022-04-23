#include <bits/stdc++.h>
using namespace std;
int pairs(int arr[],int n,int s)
{
    int low =0;
    int high=n-1;
    while(low<=high)
    {
           
           if(arr[low]+arr[high]==s)
           {
                  return 1;
           }
            else if(arr[low]+arr[high]>s)
           {
                  high=high-1;
           }
           else{
                  low=low+1;
           }
           
    }  
    return -1; 
}
int main(){

    int arr[] = {2, 3, 7, 8, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 16;
    cout << pairs(arr, n, sum);
  return 0;
}
