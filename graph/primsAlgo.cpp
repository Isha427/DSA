#include <bits/stdc++.h>
using namespace std;
int main(){
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<psir<int,int>>pq;
  vector<int>vis(v,0);
  pq.push({0,0});
  while(!pq.empty())
  {
       auto it=pq.top();
       int node=it.second;
       int wt=it.first;
       if(v[node]==1){
              continue;
       }
       v[node]=1;
       sum+=wt;
       for(auto it:adj[node])
       {
              int adjnode=it.second;
              int adjwt=it.first;
              if(!v[adjnode])
              {
                     pq.push({adjwt,adjnode});
              }
       }
  }