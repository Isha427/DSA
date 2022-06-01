#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int l,int r)
{
       int p=arr[r];
       int j=l-1;
       for(int i=l;i<=r-1;i++)
       {
              if(arr[i]<p)
              {
                  j++;
                  swap(arr[i],arr[j]);
              }
       }
       swap(p,arr[j+1]);
       return j+1;
}
int ksmallest(int arr[],int n,int k)
{    int l=0;int r=n-1;
    while(l<=r)
    {
           int p=partition(arr,l,r);
           if(p==k-1)
           {   return p;

           }
           else if(p>k-1)
           {
                  r=p-1;
           }
           else{
                  l=p+1;
           }
    }
    return -1;
}
int main(){
   int arr[] = {50, 20, 40, 60, 10, 30};

       int n = sizeof(arr) / sizeof(arr[0]);
       int k=4;
     int a=ksmallest(arr,n,k);
     cout<<arr[a];

     
  return 0;
}
