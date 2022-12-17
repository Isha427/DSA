#include <bits/stdc++.h>
using namespace std;
int main(){
  string s="H#E@#EL&O";
  int low=0;
  int high=s.length()-1;
  while(low<high)
  {
       while(!isalnum(s[low]) && low<high)
       {
              low++;
       }
       while(!isalnum(s[high]) && low<high)
       {
              high--;
       }
       swap(s[low],s[high]);
       low++;
       high--;
  }
  cout<< s;
  return 0;
}