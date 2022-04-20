#include <iostream>
using namespace std;
bool palindrome(string &st, int start, int end)
{
       if (start >= end)
       {
              return true;
       }
       return ((st[start] == st[end]) && palindrome(st, start + 1, end - 1));
}


int main()
{
       
              string st;
             getline(cin,st);
              int start = 0;
              int end = st.length() - 1;
             
              if(palindrome(st,start,end))
              {
                     cout<<"True"<<"\n";
              }
              else{
                     cout<<"False"<<"\n";
              }
       
       return 0;
}