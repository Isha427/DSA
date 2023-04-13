#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{  string st;
   cin >>st;
   stack<char>s;
   s.push(st[0]);
   for(int i=1;i<st.length();i++)
   {
       if(!s.empty() && st[i]==s.top())
       {
           s.pop();
       }
       else
       {
           s.push();
       }
   }
   string ans="";
   while(!s.empty())
   {
       ans.push_back(s.top());
   }
   reverse(ans.begin(),ans.end());
   cout<<ans;
   

   return 0;
}
   
    
    

