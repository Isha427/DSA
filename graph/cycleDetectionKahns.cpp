#include <bits/stdc++.h>
using namespace std;
bool cycle(vector<vector<int>>adj,vector<int>&in,int n)
{    int c;
       queue<int>q;
       for(int i=0;i<n;i++)
       {
              if(in[i]==0)
              {
                     q.push(i);
              }
       }
       while(!q.empty())
       {      int u=q.front();
              q.pop();
              c++;
              for(auto x:adj[u])
              {
                     in[x]--;
                     if(in[x]==0)
                     {
                            q.push(x);
                     }
              }
       }
       return (c!=n);
}
int main(){
  vector<vector<int>>edge{{0,1},{4,1},{1,2},{2,3},{3,1}};
 
  int n=edge.size();
  vector<vector<int>>adj(n);
  vector<int>in(n,0);
  for(auto &x:edge)
  {
      adj[x[0]].push_back(x[1]);
      in[x[1]]++;
       
  }
  cout<<cycle(adj,in,n);
  return 0;
}
