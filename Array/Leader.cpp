#include<bits/stdc++.h>
using namespace std;
int main()
{    int arr[9]={5,3,2,6,0,3,0,1,2};
int n=9;
       int max=arr[n-1];
     for(int i=n-2;i>=0;i--)
     {
       if(arr[i]>max)
       {
              max=arr[i];
       }
     }
     cout<<max;
       return 0;
}