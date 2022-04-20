#include<bits/stdc++.h>
using namespace std;
int rev(int arr[],int low,int high)
{ while(low <high)
        {
               int temp=arr[low];
               arr[low]=arr[high];
               arr[high]=temp;
               low++;
               high--;
        }

}
int main()
{
          int arr[9] = {5, 0, 2, 0, 9, 3, 0, 1, 3};
          int d=4,n=9;
          rev(arr,0,n-1);
          rev(arr,0,d-1);
          rev(arr,d,n-1);
          for (int i = 0; i < 9; i++)
       {
              cout<<arr[i]<<" ";
       }


       return 0;
}