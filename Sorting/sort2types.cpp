#include <bits/stdc++.h>
using namespace std;
//even odd, 0 1,positive negative
//first even then odd
void sorts(int arr[],int n)
{   int j=-1;
   for(int i=0;i<n;i++)
   {
       if(arr[i]%2==0)
       {
         j++;
         swap(arr[i],arr[j]);
       }
       else{
              continue;
       }
   }
   for(int i=0;i<n;i++)
   {
          cout<<arr[i]<<" ";
   }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    sorts(arr,6);
  return 0;
}
