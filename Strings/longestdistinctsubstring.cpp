#include <bits/stdc++.h>
using namespace std;
int main(){
   string st="abscdjhgkwjdwe";
   int start=INT_MIN;
   int res=0;
   vector<int> prev(256,-1);
   for(int i=0;i<st.length();i++)
   {
       start=max(start,prev[st[i]]+1);
       int maxend=i-start+1;
       res=max(res,maxend);
       prev[st[i]]=i;
   }
   cout<<res;
  return 0;
}
