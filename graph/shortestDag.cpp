#include <bits/stdc++.h>
using namespace std;
void shorts(vector<vector<int>>adj,vector<int>&in,int n,vector<int>w,int s)
{      queue<int>q;
       vector<int>ts;
       vector<int>ds(n,2147483647);
       ds[s]=0;

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
              ts.push_back(u);
              q.pop();
              for( int v:adj[u])
              {
                     in[v]--;
                     if(in[v]==0)
                     {
                            q.push(v);
                     }
              }
       }
       for(int u:ts)
       {
              for(int k:adj[u])
              {
                   if(ds[k]>ds[u]+w[u])
                   {
                     ds[k]=ds[u]+w[u];
                   }
              }
       }
       for(int i=0;i<n;i++)
       {
              cout<<ds[i]<<" ";
       }
}
int main(){
  vector<vector<int>>edge{{0,1},{0,4},{1,2},{4,2},{4,5},{2,3},{5,3}};
 
  int n=6;
  vector<vector<int>>adj(n);
  vector<int>in(n,0);
  vector<int>w{2,1,3,2,4,6,1};
  int s=0;
  for(auto &x:edge)
  {
      adj[x[0]].push_back(x[1]);
      in[x[1]]++;
       
  }
  shorts(adj,in,n,w,s);
  return 0;
}
