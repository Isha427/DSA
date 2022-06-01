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
node *deletes(node *head)
{
       if (head == NULL)
       {
              return NULL;
       }
       node *temp = head;
       while(temp->next->next!=NULL)
       {
              temp=temp->next;

       }
       temp->next=NULL;
       delete(temp->next);
       return head;

      
}
int main()
{
       node *head = new node(20);
       head->next = new node(30);
       head->next->next = new node(40);
       head = deletes(head);
       traverse(head);

       return 0;
}
