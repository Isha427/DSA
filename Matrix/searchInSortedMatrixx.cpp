#include <bits/stdc++.h>
using namespace std;
const int r=4,c=4;
int i=0,j=c-1;
void search(int arr[r][c],int x)
{
   while(i<=r &&j>=0)
   {
     if(arr[i][j]==x)
     {
       cout<<"c["<<i<<"]["<<j<<"]";
       return;
     }
     else if(arr[i][j]>x)
     {
       j--;
     }
     else{
       i++;
     }
   }
}
int main(){
  int arr[r][c] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
       search(arr,11);
  return 0;
}
