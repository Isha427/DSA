#include <bits/stdc++.h>
using namespace std;
void Kclosest(int arr[],int n,int x,int k)
{
       map<int,int>mp;
       for(int i=0;i<n;i++)
       {
              mp[arr[i]]=abs(x-arr[i]);
       }
       int c=0;
       sort(mp.begin(),mp.end());
       for(auto x:mp)
       {
       //     c++;
       //     cout<<x.second<<" ";   
       //     if(c==k)
       //     {
       //        break;
       //     }
       }
}
int main(){
int arr[] = { 10,30,5,40,38,80,70 };

	int size = sizeof(arr) / sizeof(arr[0]);

	int x=35; int k = 3;

	Kclosest(arr,size,x,k);

	
  return 0;
}
