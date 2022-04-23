#include <bits/stdc++.h>
using namespace std;
//naive
// int sq(int n)
// {
//        int i=1;
//        while(i*i<=n)
//        {
//           i++;
//        }
//        return i-1;
// }//(x^1/2)
//efficient
int sq(int n)
{
    int low=0;
    int high=n-1;
    int midsq=0;
    int ans=0;
    while(low<=high)
    {
           int mid=(low+high)/2;
           midsq=mid*mid;
           if(midsq==n)
           {
                  return mid;
           }
           else if(midsq>n)
           {
                  high=mid-1;
           }
           else{
                  low=mid+1;
                  ans=mid;
           }
    }
    return ans;
}

int main(){
       int x;
  cin>>x;
  cout<<sq(x);
  return 0;
}
