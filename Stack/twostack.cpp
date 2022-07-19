#include <bits/stdc++.h>
using namespace std;
struct myStack
{
       int *arr;
       int cap;
       int top1, top2;
       myStack(int x)
       {
              arr = new int[cap];
              cap = x;
              top1 = -1;
              top2 = cap;
       }
       void push1(int x)
       {
              if (top1 <= top2 - 2)
              {
                     top1++;
                     arr[top1] = x;
              }
              else
              {
                     cout << "stack Overflow";
                     return;
              }
       }
       void push2(int x)
       {
              if (top1 < top2 - 1)
              {
                     top2--;
                     arr[top2] = x;
              }
              else
              {
                     cout << "stack Overflow";
                     return;
              }
       }
       int pop1()
       {
              if (top1 == -1)
              {
                     cout << "stack underflow";
                     exit(1);
              }
              else
              {
                   int x= arr[top1];
                     top1--;
                     return x;
              }
       }
       int pop2()
       {
              if (top1 == cap)
              {
                     cout << "stack underflow";
                     exit(1);
              }
              else
              {
                     int x= arr[top2];
                     top2++;
                     return x;
              }
       }
};
int main()
{
       myStack ts(5);
       ts.push1(5);
       ts.push2(10);
       ts.push2(15);
       ts.push1(11);
       ts.push2(7);
       cout << "Popped element from stack1 is " << ts.pop1();
       ts.push2(40);
       cout << "\nPopped element from stack2 is " << ts.pop2();
       return 0;
       return 0;
}
