#include <bits/stdc++.h>
using namespace std;
int main()
{
       int arr[9] = {5, 0, 2, 0, 9, 3, 0, 1, 3};
       int temp=arr[0];
       for (int i = 1; i < 9; i++)
       {
         arr[i-1]=arr[i];
       }
       arr[8]=temp;
       for (int i = 0; i < 9; i++)
       {
              cout<<arr[i]<<" ";
       }

       return 0;
}