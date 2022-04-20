#include <iostream>
using namespace std;
void toh(int n,char a,char b,char c)
{

   if(n==1)
   {
     cout<<"Move 1"<<" from "<<a<<" To "<<c<<"\n";
     return;
   }
   toh(n-1,a,c,b);
   cout<<"Move "<<n<<" from "<<a<<" To "<<c<<"\n";
   toh(n-1,b,a,c);


}
int main()
{
       int n;
       cin>>n;
       toh(n,'A','B','C');
       
}