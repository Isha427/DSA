#include <bits/stdc++.h>
using namespace std;
struct Mystack
{
       int *arr;
       int cap;
       int top;
       Mystack(int s)
       {
              top = -1;
              cap = s;
              arr = new int[cap];
       }
       void push(int x)
       {
              if (top == cap - 1)
              {
                     cout << "Stack is full";
                     return;
              }
              top++;
              arr[top] = x;
       }
       void pop()
       {
              if (top == -1)
              {
                     cout << "Stack is empty";
                     return;
              }
              cout << arr[top]<<"\n";
              top--;
       }
       void peek()
       {
              if (top == -1)
              {
                     cout << "Stack is empty";
                     return;
              }
              cout << arr[top]<<"\n";
       }
       void size()
       {
              cout << top + 1<<"\n";
       }

} ;int main()
{
       Mystack s(5);
       s.push(5);
       s.push(10);
       s.push(20);
       s.pop();
       s.size();
       s.peek();
       //     cout<<s.isEmpty()<<endl;

       return 0;
}
