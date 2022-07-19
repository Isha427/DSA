#include <bits/stdc++.h>
using namespace std;
printPrevGreater(int arr[], int n)
{
       stack<int>s;
       s.push(arr[0]);
       cout<<"-1"<<" ";
       for(int i=1;i<n;i++)
       {
          while(s.empty()==false && s.top()<=arr[i] )
          {
            s.pop();
          }
          int gt=s.empty()?-1:s.top();
          cout<<gt<<" ";
          s.push(arr[i]);
       }
}
int main()
{
       int arr[] = {20, 30, 10, 5, 15};
       int n = 5;
       printPrevGreater(arr, n);
       return 0;
       
}
