#include <bits/stdc++.h>
using namespace std;
int main(){
   string st="Utkrishta";
   string sub="ishani";
   int j=0;
   for(int i=0;i<st.length();i++)
   {
       if(st[i]==sub[j])
       {
              j++;
       }
   }
   if(j==sub.length())
   {
       cout<<sub<<" is contained in "<<st;
   }
   else{
       cout<<"NO";

   }
  return 0;
}
