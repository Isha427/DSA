#include <bits/stdc++.h>
using namespace std;
int main(){
   string st="abbbca";
   bool visited[256];
   fill(visited,visited+256,false);
   int res=0;
   for(int i=st.length()-1;i>=0;i--)
   {
       if(visited[st[i]]==true)
       {
              res=i;
       }
       else{
             visited[st[i]]=true; 
       }
   }
   cout<<st[res];
   
  return 0;
}
