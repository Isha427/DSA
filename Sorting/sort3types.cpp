#include <bits/stdc++.h>
using namespace std;
// first all zeroes then all ones then all twos;
void sorts(int arr[], int n)
{
       int low = 0, mid = 0, h = n - 1;
       while (mid <= h)
       {
              if (arr[mid] == 0)
              {
                     swap(arr[mid], arr[low]);
                     low++;
                     mid++;
              }
              else if (arr[mid] == 1)
              {
                     mid++;
              }
              else if(arr[mid] == 2)
              {
                     swap(arr[mid], arr[h]);
                     h--;
              }
       }
}
int main()
{
      int arr[]={0,1,1,2,0,1,1,2};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	sorts(arr,n);
	
       for (int i = 0; i < n; i++)
       {
              cout << arr[i] << " ";
       }
       return 0;
}
