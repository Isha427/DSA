#include <bits/stdc++.h>
using namespace std;
int main(){
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>pq;
  vector<int>dis(v);
  int s=0;
  for(int i=0;i<v;i++)
  {
       dis[i]=1e9;
  }
  ds[s]=0;
  pq.push({0,S});
  while(!pq.empty())
  {
       int dis=pq.top().first;
       int node=pq.top().second;
       pq.pop();
       for(auto x:adj[node])
       {
          int adjnode=x[0];
          int adjwt=x[1];
          if(dis+adjwt<ds[adjnode])
          {
              ds[adjnode]=dis+adjwt;
              pq.push(dis[adjnode],adjnode)
          }
       }
  }


  return 0;
}
