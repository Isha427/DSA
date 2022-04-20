#include <bits/stdc++.h>
using namespace std;
void subs(string &st, string curr, int i, int n)
{

       if (i == n)
       {
              cout << curr << " ";
              return;
       }
       subs(st, curr, i + 1, n);
       subs(st, curr + st[i], i + 1, n);
}
int main()
{
       int n;
       cin >> n;
       cin.ignore();
       
       string st;
     getline(cin,st);
       subs(st, "", 0, st.length());
}