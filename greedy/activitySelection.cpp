#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
       return  (a.second<b.second);
}
int main(){
  int n=3;
  vector<pair<int,int>>arr{{12,25},{10,20},{20,30}};
  sort(arr.begin(),arr.end(),cmp);
  int res=1;
  int prev=0;
  for(int curr=1;curr<n;curr++)
  {
       if(arr[curr].first>=arr[prev].second)
       {
              prev=curr;
              res++;
       }
  }
  cout<< res;
  return 0;
}
