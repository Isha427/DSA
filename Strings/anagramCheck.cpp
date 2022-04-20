#include <bits/stdc++.h>
using namespace std;
 bool anagram(string&s1 ,string&s2)
{
        int chars[26]={0};
       if(s1.length()!=s2.length())
       {
              return false;
       }
       for(int i=0;i<s1.length();i++)
       {
            chars[s1[i]-'a']++;
            chars[s2[i]-'a']--;

       }
        for(int i=0;i<26;i++)
        {
              if(chars[i]!=0)
              {
                     return false;
              }
        }
        return true;
        
}
int main(){

  string s1="listens";
  string s2="silent";
  if(anagram(s1,s2)==true)
  {
         cout<<"Anagram";

  }else{
         cout<<"Not";
  }
  return 0;
}
