#include <bits/stdc++.h>
using namespace std;
void subset(int arr[],int i,int n,vector<int>&temp,int sum)
{   
    if(i==n )
    {    if(sum==0)
      
          {for(int i=0;i<temp.size();i++)
          {
                  cout<<temp[i]<<" ";
          }
          cout<<"\n";}
       
       return;
    }
    temp.push_back(arr[i]);
    sum-=arr[i];
    subset(arr,i+1,n,temp,sum);
    sum+=arr[i];
    temp.pop_back();
    subset(arr,i+1,n,temp,sum);
   
}
int main(){
  int arr[]={1,2,1};
  int n=3;
 vector<int>temp;
  int sum=2;
  // int s=0;
  subset(arr,0,n,temp,sum);
  // cout<<"end";
  return 0;
}
