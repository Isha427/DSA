#include <bits/stdc++.h>
using namespace std;
int cap;
struct Deque
{

       int *arr;
       int size, cap, front;

       Deque(int c)
       {
              cap = c;
              arr = new int[cap];
              size = 0;
              front=0;
       }
       bool isFull()
       {
              if (size == cap)
              {
                     return 1;
              }

              return 0;
       }
       bool isEmpty()
       {
              if (size == 0)
              {
                     return 1;
              }

              return 0;
       }
       void insertrear(int x)
       {
              if (isFull())
              {
                     return;
              }
              int rear = (front + size) % cap;
              arr[rear] = x;
              size++;
             
       }
       void insertfront(int x)
       {
              if (isFull())
              {
                     return;
              }
              front = (front + cap - 1) % cap;
              arr[front] = x;
              size++;
              
       }
       void delfront()
       {
              if (isEmpty())
              {
                     return;
              }
              front = (front + 1) % cap;
              size--;
       }
       void delrear()
       {
              if (isEmpty())
              {
                     return;
              }
              size--;
       }
       void getrear()
       {
              if (isEmpty())
              {
                     return;
              }
              cout<<arr[(front + size - 1) % cap]<<"\n";
       }
       void getfront()
       {
              if (isEmpty())
              {
                     cout<<"-1";
              }
              cout<<arr[front]<<"\n";
       }
       void display()
       {
              for (int i = front; i <= (front + size - 1) % cap; i++)
              {
                     cout << arr[i] << " ";
              }
              cout << "\n";
       }
};

int main()
{
       Deque dq(4);
       dq.insertrear(5);
       dq.insertfront(10);
       dq.getrear();
       dq.delrear();
       dq.insertfront(15);
       dq.insertrear(22);
       dq.getfront();
       dq.delfront();
      
      dq.getfront();

       return 0;
}