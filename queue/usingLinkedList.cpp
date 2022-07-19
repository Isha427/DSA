#include <bits/stdc++.h>
using namespace std;
struct node
{
       node *next;
       int data;
       node(int c)
       {
              data = c;
              next = NULL;
       }
};
struct Queue
{
       node *front, *rear;
       Queue()
       {
              front = rear = NULL;
       }
       void enqueue(int c)
       {
              node *temp = new node(c);
              if (rear == NULL)
              {
                     front = rear = temp;
                     return;
              }

              rear->next = temp;
              rear = temp;
       }
       void dequeue()
       {
              if (front == NULL)
              {
                     return;
              }
              node *temp = front;
              front = front->next;
              if (front == NULL)
              {
                     rear = NULL;
              }
              delete (temp);
       }
       void getfront()
       {
              if (front == NULL)
              {
                     cout << -1;
              }
              else
              {
                     cout << front->data << " ";
              }
       }
       void getrear()
       {
              if (front == NULL)
              {
                     cout << -1;
              }
              else
              {
                     cout << rear->data << " ";
              }
       }
};
int main()
{
       Queue qu;
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
