#include <bits/stdc++.h>
using namespace std;
void unionsi(int arr[], int brr[], int n, int m)
{

  int i = 0, j = 0;
  while (i < n && j < m)
  {
    if (arr[i] == arr[i - 1] && i > 0)
    {
      continue;
    }

    if (brr[j] == brr[j - 1] && j > 0)
    {
      continue;
    }
    if (arr[i] <brr[j])
    {

      cout << arr[i] << " ";
      i++;
    }
    else if (brr[j] < arr[i])

    {
      cout << brr[j] << " ";
      j++;
    }

    else
    {
      cout << arr[i]<<" ";
      i++;
      j++;
    }
  }
  while (i < n)
  {
    if (arr[i] != arr[i - 1] || i >=0)
    {
      cout << arr[i];
      i++;
    }
  }
  while (j < m)
  {
    if (brr[j] != brr[j - 1] || j >=0)
    {
      cout << brr[j];
      j++;
    }
  }
}
int main()
{
  int arr[] = {1, 3, 4, 5, 7};
  int brr[] = {2, 3, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  int m = sizeof(brr) / sizeof(brr[0]);
  sort(arr, arr + n);
  sort(brr, brr + m);
  unionsi(arr, brr, n, m);

  return 0;
}
