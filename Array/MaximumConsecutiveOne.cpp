#include <bits/stdc++.h>
using namespace std;
int main()
{
       int arr[10] = {1, 0, 1, 1, 0, 0, 0, 1, 1, 1};
       int c = 0,ans=0;
       for (int i = 0; i < 10; i++)
       {
              if (arr[i]==1)
              {
                     c++;
                      ans=max(c,ans);
              
              }
                     
              else{
                      
                     
                      c=0;
              }
       }
       cout<<ans;
       return 0;
}