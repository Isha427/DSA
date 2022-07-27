#include <bits/stdc++.h>
using namespace std;
struct kstack
{
       int *arr, *top, *next;
       int freetop, cap, k;
       kstack(int k1, int c)
       {
              k = k1;
              cap=c;
              top = new int[k];
              next = new int[cap];
              arr = new int[cap];
              freetop = 0;
              for (int i = 0; i < k; i++)
              {
                     top[i]=-1;
              }
              for (int i = 0; i < cap-1; i++)
              {
                     next[i] = i + 1;
              }
              next[cap-1]=-1;
       }

       void push(int c, int k)
       {
              int i = freetop;
              freetop = next[i];
              next[i] = top[k];
              top[k] = i;
              arr[i] = c;
       }
       int pop(int k)
       {
              int i = top[k];
              top[k] = next[i];
              next[i] = freetop;
              freetop = i;
              return arr[i];
       }
};
int main()
{
       int k = 3, n = 10;
       kstack ks(k, n);

       ks.push(15, 2);
       ks.push(45, 2);

       ks.push(17, 1);
       ks.push(49, 1);
       ks.push(39, 1);

       ks.push(11, 0);
       ks.push(9, 0);
       ks.push(7, 0);

       cout << "Popped element from stack 2 is " << ks.pop(2) << endl;
       cout << "Popped element from stack 1 is " << ks.pop(1) << endl;
       cout << "Popped element from stack 0 is " << ks.pop(0) << endl;
       return 0;
}
