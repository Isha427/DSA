#include <bits/stdc++.h>
using namespace std;
struct node
{
       int data;
       node *next;
       node(int x)
       {
              data = x;
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
node *insert(node *head, int data)
{
       if (head == NULL)
       {
              node *temp = new node(data);
              return temp;
       }
       node *temp = new node(data);
       node *curr = head;
       while (curr->next != NULL)
       {
              curr = curr->next;
       }
       curr->next = temp;

       return head;
}
int main()
{
       node *head = new node(20);
       head->next = new node(30);
       head->next->next = new node(40);
       head = insert(head, 50);
       traverse(head);

       return 0;
}
