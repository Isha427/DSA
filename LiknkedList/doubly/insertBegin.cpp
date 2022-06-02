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
node *insert(node *head, int x)
{
       node *temp = new node(x);
       temp->next = head;
       head->prev = temp;
       return temp;
}
int main()
{
       node *head = new node(30);
       head->next = new node(40);
       head->next->prev = head;
       head=insert(head, 20);
       traverse(head);

           return 0;
}
