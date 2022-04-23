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
                            if(mid==0||arr[mid-1]!=1)
                            {
                                   return n-mid;
                            }
                            else{
                                   high=mid-1;
                            }
                     }
              }

       }
       return -1;
}
int main(){
  int arr[] = {0, 0, 1, 1, 1, 1}, n = 6;

   cout << countones(arr, n);
  return 0;
}
