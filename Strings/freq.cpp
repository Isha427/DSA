#include <bits/stdc++.h>
using namespace std;
void stringsfreq(string&s)
{
        int chars[26]={0};
       
       for(int i=0;i<s.length();i++)
       {
            chars[s[i]-'a']++;
           

       }
        for(int i=0;i<26;i++)
        {
              if(chars[i]>0)
              {
                  cout<<(char) (i+'a')<<" "<<chars[i]<<"\n";
              }
        }
        
}
int main(){

  
  string s="silentlisten";
  stringsfreq(s);

}
