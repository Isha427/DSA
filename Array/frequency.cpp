#include<bits/stdc++.h>
using namespace std;

int main()
{
       int arr[]={1,1,2,2,2,3,3,3,4,4,4,4,5}  ;
       int freq=1,n=13;

      
       for(int i=1;i<n;i++)
       {
              if(arr[i]==arr[i-1])
              {
                     freq++;
              }
              else{
                     cout<<" Frequency of"<<arr[i-1]<<"is "<<freq;
                     freq=1;
              }
       }
        cout<<" Frequency of"<<arr[n-1]<<"is "<<freq;
       

       // while(i<n)
       // {
       //        while(arr[i]==arr[i-1])
       //        {
       //               freq++;
       //               i++;
       //        }
       //        cout<<arr[i-1]<<" "<<freq<<"\n";
       //        i++;
       //        freq=1;
              
              
       // }
       // if(n==1||arr[n-1]!=arr[n-2])
       //        { 
       //                cout<<arr[n-1]<<" "<<freq<<"\n";

       //        }
        

       return 0;
}