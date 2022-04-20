#include<bits/stdc++.h>
using namespace std;
int main()
{   int arr[9]={5,0,2,0,9,3,0,1,3};
    int count=0;
    for(int i=0;i<9;i++)
    {
         if(arr[i]!=0)
         {
                swap(arr[i],arr[count]);
                count++;
         }
    }
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
       return 0;
}