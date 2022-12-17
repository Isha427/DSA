#include <bits/stdc++.h>
using namespace std;
void firstKElements(int arr[],int n,int k)
{
  priority_queue<int,vector<int>,greater<int>>pq(arr,arr+k);
  for(int i=k+1;i<n;i++)
  {
     if(pq.top()<arr[i]){
       pq.pop();
       pq.push(arr[i]);
     }
  }
  while(!pq.empty())
  {
       cout<<pq.top()<<" ";
       pq.pop();
  }
   
}
int main(){
 int arr[] = { 11, 3, 2, 1, 15, 5, 4, 45, 88, 96, 50, 45 };

	int size = sizeof(arr) / sizeof(arr[0]);

	int k = 3;

	firstKElements(arr,size,k);
  return 0;
}
