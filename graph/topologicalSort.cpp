#include <bits/stdc++.h>
using namespace std;
void topologicalSort(vector<vector<int>>&adj,vector<int>&in,int n)
{  queue<int>q;
   for(int i=0;i<n;i++)
   {
      if(in[i]==0)
      {
       q.push(i);
      }

   }
   while(!q.empty())
   {
      int u=q.front();
      q.pop();
      cout<<u<<" ";
      for(int v:adj[u])
      {
         in[v]--;
         if(in[v]==0)
         {
              q.push(v);
         }
      }
      
   }
}
int main(){
  vector<vector<int>>edge{{0,2},{0,3},{1,3},{1,4},{2,3}};
 
  int n=edge.size();
  vector<vector<int>>adj;
  vector<int>in(n,0);
  for(auto &x:edge)
  {
      adj[x[0]].push_back(x[1]);
      in[x[1]]++;
       
  }
  topologicalSort(adj,in,n);
  return 0;
}
