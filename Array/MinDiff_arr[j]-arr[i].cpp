#include<bits/stdc++.h>
using namespace std;
int main()
{    int arr[9] = {5, 9, 2, 9, 9, 3, 0, 1, 3};
       int res=arr[1]-arr[0],minm=arr[0];
       for(int i=1;i<10;i++)
       {
         res=max(arr[i]-minm,res);
         minm=min(minm,arr[i]);
       

       }
       cout<<res;
       return 0;
}