#include <bits/stdc++.h>
using namespace std;
struct myQueue
{
  int cap;
  int *arr;
  int size;
  int front;
  int rear;
  myQueue(int c)
  {
    cap = c;
    size = 0;
    arr = new int[cap];
    front = 0;
    rear = -1;
  }
  int isEmpty()
  {
    if(size==0)
    {
      return 1;
    }
    else {
      return 0;
    }
  }
  int isfull()
  {
    if(size==cap)
    {
      return 1;
    }
    else {
      return 0;
    }
  }
  int enqueue(int c)
  {
    if (isfull())
    {
      return -1;
    }
    else
    {
      rear = (rear + 1) % cap;
      arr[rear] = c;
      size++;
      
    }
  }
  void dequeue()
  {
    if (isEmpty())
    {
      return;
    }
    else
    {
      front = (front + 1) % cap;
      size--;
    }
  }
  void getrear()
  {
    if (isEmpty())
    {
      cout<< -1;
    }
    else
    {
      cout<< arr[rear]<<" ";
    }
  }
  void getfront()
  {
    if (isEmpty())
    {
      cout<< -1;
    }
    else
    {
      cout<< arr[front]<<" ";
    }
  }
} ;int main()
{
   myQueue qu(5);
   qu.enqueue(10);
   qu.enqueue(30);
   qu.enqueue(40);
   qu.enqueue(50);
   qu.getfront();
   qu.getrear();
   qu.dequeue();
   qu.getfront();
   qu.getrear();
  return 0;
}
