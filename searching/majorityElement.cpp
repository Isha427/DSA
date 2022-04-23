#include <bits/stdc++.h>
using namespace std;
void maj(int arr[],int n)
{
       int res=0,count=1;
       for(int i=1;i<n;i++)
       {
            if(arr[i]==arr[res])
            {
                   count++;
            }
            else{
                   count--;
            }
            if(count==0)
            {
                   res=i;
                   count=1;
            }
       }
       count=0;
       for(int i=0;i<n;i++)
       {
              if(arr[i]==arr[res])
              {
                     count++;
              }
       }
       if(count>n/2)
       {
              cout<<arr[res];
       }
       else{
              cout<<"No One";
       }
}
int main(){
   int arr[]={1,6,7,3,6,2,6,6,6};
   int n=9;
   maj(arr,n);
  return 0;
}
