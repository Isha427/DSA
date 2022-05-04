#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n)
{
   for(int i=0;i<n-1;i++)
   {      bool swapped=false;
          for(int j=1;j<=n-i-1;j++)
          {
              if(arr[j]<arr[j-1])
              {
                     swap(arr[j-1],arr[j]);
                     swapped=true;
               } 
          }
          if(swapped==false)
          {
                 return;
          }
   }
}
int main(){
    int arr[]={5,0,2,4,3,9,1};
    int n=7;
       bubbleSort(arr,n);
       for(int i=0;i<n;i++)
       {
              cout<<arr[i]<< " ";
       }
  return 0;
}
