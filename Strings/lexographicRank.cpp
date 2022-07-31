#include <bits/stdc++.h>
using namespace std;
int facts(int n)
{
       if (n <= 1)
       {
              return 1;
       }
       return n * facts(n - 1);
}
int main()
{
       string st = "string";
      
       int fact = facts(st.length());
       int count[256] = {0};
       for (int i = 0; i < st.length(); i++)
              count[st[i]]++;
       for (int i = 1; i < 256; i++)
       {
              count[i] = count[i] + count[i - 1];
       }
       int res = 1;
       for (int i = 0; i < st.length() - 1; i++)
       {
              fact = fact / (st.length() - i);
              res = res + count[st[i] - 1] * fact;
              for (int j = st[i]; j < 256; j++)
              {
                     count[j]--;
              }
       }
       cout << res;

       return 0;
}
