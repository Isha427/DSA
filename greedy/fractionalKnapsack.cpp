#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{      double r1=(double)a.first/a.second;
       double r2=(double)b.first/b.second;
       return r1>r2;
}
int main(){
  vector<pair<int,int>>v{{120,30},{100,20},{60,10}};
  sort(v.begin(),v.end(),cmp);
  
  int n=v.size();
  int givencap=50;
  int cap=givencap;
  double res=0.0;
  cout<<res;
  for(int i=0;i<n;i++)
  {
       if(v[i].second<=cap)
       {
          res+=v[i].first;
          cap-=v[i].second;
       }
       else{
            res+=v[i].first*((double)cap/v[i].second);
            break;
                
       }
       
  }
  cout<<res;
  
  return 0;
}
