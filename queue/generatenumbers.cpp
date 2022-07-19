#include <bits/stdc++.h>
using namespace std;
int main(){
  queue<string>q;
  int n;
  cin>>n;
  q.push("5");
  q.push("6");
  for(int i=0;i<n;i++)
  {
    string curr=q.front();
    cout<<curr<<" ";
    q.push(curr+"5");
    q.push(curr+"6");
    q.pop();
  }
   

  return 0;
}
