#include <bits/stdc++.h>
using namespace std;
void sums(int arr[],int n,int k)
{
       priority_queue<int,vector<int>,greater<int>>pq(arr,arr+n);
  int c=0;
       while(pq.top()<=k)
       {
              c++;
              k-=pq.top();
              pq.pop();

       }
       cout<< c;
}
int main(){
  int n=5;
    int arr[n]={1,12,5,111,200};
    int sum=10;
    sums(arr,n,sum);
  return 0;
}
