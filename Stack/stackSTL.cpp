#include <bits/stdc++.h>
using namespace std;
int main(){
  stack<int>s;
  s.push(10);
  s.push(11);
  s.push(12);
  s.push(13);
  cout<<s.top()<<" ";
  s.pop();
  cout<<s.top()<<" ";
  while(!s.empty())
  {
       cout<<s.top()<<" ";
       s.pop();
  }

  return 0;
}
