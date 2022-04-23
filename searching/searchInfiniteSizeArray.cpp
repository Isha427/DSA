#include <bits/stdc++.h>
using namespace std;
int bSearch(int arr[], int low, int high, int x)
{
       if (low > high)
              return -1;

       int mid = (low + high) / 2;

       if (arr[mid] == x)
              return mid;

       else if (arr[mid] > x)
              return bSearch(arr, low, mid - 1, x);

       else
              return bSearch(arr, mid + 1, high, x);
}

int searches(int arr[], int x)
{
       if (arr[0] == x)
       {
              return 0;
       }
       int i = 1;

       while(arr[i] < x)
       {
              i *= 2;
       }
       if (arr[i] == x)
       {
              return i;
       }
       return bSearch(arr, i / 2 + 1, i - 1, x);
}
int main()
{
       int arr[] = {1, 2, 4, 5, 5};

       int x = 4;

       cout << searches(arr, x);
       return 0;
}
