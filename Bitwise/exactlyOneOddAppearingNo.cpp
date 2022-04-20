#include <bits/stdc++.h>
using namespace std;
int main(){

   int arr[]={1,3,4,5};
   int res=0;
   int n=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<n;i++)
   {
       res=res^arr[i];
   }
   
   for(int i=1;i<=n+1;i++)
   {
       res=res^i;
   }
   
   cout<<res;

// //   return 0;
// int arr[23]={0};
// int n=sizeof(arr)/sizeof(arr[0]);
// for(int i=0;i<n;i++)
// {
//     cout<<arr[i];
// }


}
