#include <bits/stdc++.h>
using namespace std;
void reverse(int start,int end,string &s)
{
       while(start<end)
       {
          char temp=s[start];
          s[start]=s[end];
          s[end]=temp;
          start++;
          end--;
       }
       
}
void reverses(string &s)
{
    int start=0;
    for(int i=0;i<s.length();i++)
    {
           if(s[i]==' ')
           {
                  reverse(start,i-1,s);
                  start=i+1;
           }
    }
      
}
int main(){

    string s="Hey sarvagya is kutta kamina";
    s.push_back(' ');
    reverses(s);
    cout<<s;
  return 0;
}
