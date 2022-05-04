#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int l,int r)
{
       
}
int ksmallest(int arr[],int l,int r,int k)
{
    while(l<r)
    {
           int p=partition(arr,l,r);
           if(p==k-1)
           {   return arr[p];

           }
           else if(p>k-1)
           {
                  r=r-1;
           }
           else{
                  l=l+1;
           }
    }
}
int main(){
   int arr[] = {50, 20, 40, 60, 10, 30};

       int n = sizeof(arr) / sizeof(arr[0]);
       int k=3;
       ksmallest(arr, 0, n-1,k);

       for (int i = 0; i < n; i++)
              cout << arr[i] << " ";
  return 0;
}
