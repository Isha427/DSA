#include <bits/stdc++.h>
using namespace std;

int main(){
  string st;
  getline(cin,st);
  int flag=1;
  int n=st.length();
  for(int i=0;i<n/2;i++)
  {
       if(st[i]!=st[n-i-1])
       {
              cout<<"NO"<<" ";
              flag=0;
              break;
       }
       
  }
  if (flag==1)
  {
       cout<<"Yes";
  }
  return 0;
}
