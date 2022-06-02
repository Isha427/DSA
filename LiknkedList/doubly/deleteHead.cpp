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
node * traverse(node * head)
{
       node *temp=head;
       while(temp!=NULL)
       {      cout<<temp->data<<"\n";
              temp=temp->next;
       }
}
node *deleted(node *head)
{
       node *temp = head;
       temp=temp->next;
       delete(head);
       return temp;
}
int main()
{
       node *head = new node(30);
       head->next = new node(40);
       head->next->prev = head;
       head->next->next = new node(50);
       head->next->next->prev = head->next;
       head=deleted(head);
       traverse(head);

           return 0;
}
