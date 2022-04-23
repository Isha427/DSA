#include <bits/stdc++.h>
using namespace std;
//O(log n)
//other approaches will take theta n space
int firstOcc(int arr[],int n,int x)
{
    int low =0;
    int high=n-1;
    while(low<=high)
    {
           int mid=(low +high)/2;
           if(arr[mid]<x)
           {
              low=mid+1;
           }
           else if(arr[mid]>x)
           {
                  high=mid-1;
           }
           else{
                  if(mid==0||arr[mid-1]!=arr[mid])
                  {
                         return mid;
                  }
                  else{
                         high=mid-1;
                  }
           }
    }
}
int main(){
  
    
    int arr[] = {5,5, 10, 10, 10, 20}, n = 6;

	int x = 10;
	
	cout<<firstOcc(arr, n, x);
	return 0;
}
 