#include <bits/stdc++.h>
using namespace std;
struct node
{
       int data;
       node *prev;
       node *next;
       node(int x)
       {
              data = x;
              prev = NULL;
              next = NULL;
       }
};
void traverse(node *head)
{
       node *temp = head;
       while (temp != NULL)
       {
              cout << temp->data << "\n";
              temp = temp->next;
       }
}
node *insertEnd(node *head, int x)
{
       node *temp = new node(x);
       if (head == NULL)
       {
              return temp;
       }

       
       
              node *curr = head;
              while (curr->next != NULL)
              {
                     curr=curr->next ;
              }
              curr->next = temp;
              temp->prev = curr;
              return head;
       
}
int main()
{
       node *head = new node(30);
       head->next = new node(40);
       head->next->prev = head;
       head = insertEnd(head, 20);
       traverse(head);

       return 0;
}
