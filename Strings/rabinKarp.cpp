#include <bits/stdc++.h>
using namespace std;
#define d 256
const int q=101;
RBSearch(string pat, string text, int m, int n)
{
       int h = 1,t=0,p=0;
       for (int i = 1; i <=m - 1; i++)
       {
              h = (h * d) % q;
       }
       for(int i=0;i<m;i++)
       {
              t=(t*d+text[i])%q;
              p=(p*d+pat[i])%q;
       }
       for(int i=0;i<n;i++)
       {
              if(p==t)
              {      bool flag=true;
                     for(int j=0;j<m;j++)
                     {
                            if(text[i+j]!=pat[j])
                            {      flag=false;
                                   break;
                            }
                     }
                     if(flag==true)
                     {
                            cout<<i<<" ";
                     }
              }
              if(i<n-m)
              {
                     t=(d*(t-text[i]*h)+text[i+m])%q;
                     if(t<0)
                     {
                            t=t+q;
                     }
              }
       }
}
int main()
{
       string txt = "GEEKS FOR GEEKS";
       string pat = "GEEK";
       cout << "All index numbers where pattern found:"
            << " ";
       RBSearch(pat, txt, 4, 15);

       return 0;
}
