#include <bits/stdc++.h>
using namespace std;
reverse(string &st,int start,int end)
{
    while(start<=end)
    {
      swap(st[start],st[end]);
      end--;
      start++;
    }
}
int main(){
  string st="Isha is good";
  int start=0;
  for(int i=0;i<st.length();i++)
  {
    if(st[i]==' ')
    {
      reverse(st,start,i-1);
      start=i+1;
    }
  }
  reverse(st,start,st.length()-1);
  reverse(st,0,st.length()-1);
  cout<<st;

  

  return 0;
}
