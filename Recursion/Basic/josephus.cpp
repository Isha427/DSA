#include<bits/stdc++.h>
using namespace std;
int jos(int n,int k)
{
     if(n==0)
     {
            return 0;
     }
     return( jos(n-1,k)+k)%n;
}
int main()
{
       int n;
       int k;
       cin>>n>>k;
       cout<<jos(n,k);
}