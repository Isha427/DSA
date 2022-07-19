#include <bits/stdc++.h>
using namespace std;

struct Node
{
       int data;
       Node *next;
       Node(int x)
       {
              data = x;
              next = NULL;
       }
};

void printlist(Node *head)
{
       Node *curr = head;
       while (curr != NULL)
       {
              cout << curr->data << " ";
              curr = curr->next;
       }
       cout << endl;
}

Node *listi(Node *a, Node *b)
{
       Node *head = NULL;
       Node *tail = NULL;
       if (a->data <= b->data)
       {
              head = tail = b;
              a = a->next;
       }
       else
       {
              head = tail = b;
              b = b->next;
       }
       Node *temp = head;
       while (a != NULL && b != NULL)
       {

              if (a->data <= b->data)
              {
                     tail->next = a;
                     tail = a;
                     a = a->next;
              }
              else
              {
                     tail = b;
                     tail->next = b;
                     b = b->next;
              }
       }
       if (a == NULL)
       {

              tail->next = b;
       }
       else
       {

              tail->next = a;
       }
       return head;
}

int main()
{
       Node *a = new Node(10);
       a->next = new Node(20);
       a->next->next = new Node(30);
       Node *b = new Node(5);
       b->next = new Node(35);

       printlist(listi(a, b));
       return 0;
}
