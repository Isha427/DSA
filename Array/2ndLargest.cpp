#include<bits/stdc++.h>
using namespace std;
int main()
{       int arr[10]={4,8,3,6,2,9,5};
        int max=0,res=-1;
         for(int i=1;i<10;i++)
         {
                if(arr[i]>arr[max])
                {     res=max;
                       max=i;
                }
                if(arr[i]!=arr[max])
                {
                       if(res==-1||arr[i]>arr[res])
                       {
                              res=i;
                       }
                }
         }
         cout<<arr[max]<<" "<<arr[res];
       return 0;
}