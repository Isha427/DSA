#include <bits/stdc++.h>
using namespace std;
int search(int arr[], int n)
{      
       for (int i = n-2; i >=0; i--)
       {
              int low = 0;
              int high = i-1;
              while (low <= high)
              {
                     int a = arr[low] * arr[low];
                     int b = arr[high] * arr[high];
                     int c = arr[i] * arr[i];
                     if((a+b==c))
                     {
                            return 1;
                     }
                     else if(a+b>c)
                     {
                           high=high-1;
                     }
                     else{
                            low=low+1;
                     }
              }
       }
       return -1;
}
int main()
{
       int arr[] = {3, 1, 4, 6, 5} ;
       int n=5;
       sort(arr,arr+n);
       cout<<search(arr,n);
       return 0;
}
