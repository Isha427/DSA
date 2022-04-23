#include <bits/stdc++.h>
using namespace std;
//0(n^2)
int main(){

int A[] = { 1, 4, 45, 6, 10, 8 }; 
	int sum = 22; 
	int n = sizeof(A) / sizeof(A[0]); 
int ans=0;
     sort(A,A+n);
  for(int i=0;i<n;i++)
  {
         int low=i+1;
         int high=n-1;
         int s=sum-A[i];
         while(low<=high)
        {
           
           if(A[low]+A[high]==s)
           {
                  ans= 1;
                  break;
           }
            else if(A[low]+A[high]>s)
           {
                  high=high-1;
           }
           else{
                  low=low+1;
           }
           
    }  
  }
  if(ans==1)
  {
         cout<<"Yes";

  }
  else{
         cout<<"No";
  }
 
  return 0;
}
