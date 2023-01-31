#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> &adj,int i, vector<int> &vi, int n,stack<int>&st)
{
  vi[i]=true;
  for(auto v:adj[i])
  {
    if(!vi[v])
    {
      dfs(adj,v,vi,n,st);
    }
  }
  st.push(i);
}
int main()
{
  vector<vector<int>> edge{{0, 1}, {1, 3}, {2, 3}, {3, 4}, {2, 4}};

  int n = edge.size();
  vector<vector<int>> adj(n);
  vector<int> vi(n, false);
  stack<int>st;
  for (auto &x : edge)
  {
    adj[x[0]].push_back(x[1]);
  }
  for (int i = 0; i < n; i++)
  {
    if (vi[i] == false)
    {
      dfs(adj,i, vi, n,st);
    }
  }
   while(st.empty()==false){
        int u=st.top();
        st.pop();
        cout<<u<<" ";
    }

  return 0;
}
