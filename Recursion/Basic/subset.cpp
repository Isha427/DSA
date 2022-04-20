#include <bits/stdc++.h>
using namespace std;
int sub(int arr[],int n,int sum)
{
    if(n==0)
    {
           return((sum==0)?1:0);
    }
    return(sub(arr,n-1,sum)+sub(arr,n-1,sum-arr[n-1]));
}
int main()
{
       int n;
       cin>>n;
       int sum;
       cin>>sum;
       int arr[n];
       for(int i=0;i<n;i++)
       {
              cin>>arr[i];
       }
       cout<<sub(arr,n,sum);

}