#include <bits/stdc++.h>
using namespace std;
struct MyDs
{
  deque<int> dq;
  void getMin()
  {
    cout<< dq.front();
  }
  void getMax()
  {
    cout<< dq.back();
  }
  void insertMax(int x)
  {
    dq.push_back(x);
  }
  void insertMin(int x)
  {
    dq.push_front(x);
  }
  void extractmax()
  {
    int x = dq.back();

    dq.pop_back();
    cout << x;
  }
  void extractmin()
  {
    int x = dq.front();

    dq.pop_front();
    cout << x;
  }
}; int main()
{
  struct MyDs dq;
  dq.insertMin(20);
  dq.insertMax(30);
  dq.getMin();
  dq.getMax();
   dq.extractmin();
  dq.extractmax();
  return 0;
}
