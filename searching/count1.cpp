#include <bits/stdc++.h>
using namespace std;
int countones(int arr[],int n)
{
       int high=n-1;
       int low=0;
       while(low<=high)
       {
              int mid=(low+high)/2;
              while(low<=high)
              {
                     if(arr[mid]==0)
                     {
                        high=mid-1;
                     }
                     else{
                            if(mid==0||)
                     }
              }
       }
}
int main(){
  int arr[] = {0, 0, 1, 1, 1, 1}, n = 6;

   cout << countOnes(arr, n);
  return 0;
}
