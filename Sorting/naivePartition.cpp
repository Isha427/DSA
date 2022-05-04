#include <bits/stdc++.h>
using namespace std;
void partition(int arr[], int n, int p)
{
  int temp[n];
  int c = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < p)
    {
      temp[c] = arr[i];
      c++;
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == p)
    {
      temp[c] = arr[i];
      c++;
    }
  }
  int ans = c - 1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > p)
    {
      temp[c] = arr[i];
      c++;
    }
  }
  for (int i = 0; i < n; i++)
  {
    arr[i]=temp[i];
  }
}
  int main()
  {
    int arr[] = {50, 20, 40, 60, 10, 30};

    int n = sizeof(arr) / sizeof(arr[0]);
    partition(arr, n, 40);

    for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
    return 0;
  }
