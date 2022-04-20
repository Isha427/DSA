#include<bits/stdc++.h>
using namespace std;

int main()
{
       int arr[12]={1,1,2,2,2,3,3,3,4,4,4,4}  ;
       int freq=1,i=1,n=10;

       while(i<n)
       {
              while(arr[i]==arr[i-1])
              {
                     freq++;
                     i++;
              }
              cout<<arr[i-1]<<" "<<freq<<"\n";
              i++;
              freq=1;
              
              
       }
       if(n==1||arr[n-1]!=arr[n-2])
              { 
                      cout<<arr[n-1]<<" "<<freq<<"\n";

              }
        

       return 0;
}