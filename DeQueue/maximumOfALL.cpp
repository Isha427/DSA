#include <bits/stdc++.h>
using namespace std;
deque<int> dq;
void printmax(int arr[], int size, int k)
{
  for (int i = 0; i < k; i++)
  {
    while (!dq.empty() && arr[i] >= arr[dq.back()])
    {
      dq.pop_back();
    }
    dq.push_back(i);
  }

  for (int i = k; i < size; i++)
  {
    cout << arr[dq.front()];
    while (!dq.empty() && dq.front() <= i - k)
    {
      dq.pop_front();
    }
    while (!dq.empty() && arr[i] >= arr[dq.back()])
    {
      dq.pop_back();
    }
    dq.push_back(i);
  }
   cout<<arr[dq.front()];
}

int main()
{
  int arr[] = {20, 40, 30, 10, 60};
  int size = 5;
  printmax(arr, size, 3);

  return 0;
}
