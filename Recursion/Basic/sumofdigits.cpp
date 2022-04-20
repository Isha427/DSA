#include <iostream>
using namespace std;
int sum(int n)
{
       if(n<=9)
       {
              return n;
       }
       int ans=n%2;
       return(ans+sum(n/2));

}
int main()
{
       int n;
       cin>>n;
       cout<<sum(n);
}
