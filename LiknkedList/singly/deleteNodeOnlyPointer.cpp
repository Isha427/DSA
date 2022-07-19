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
void deleteNode(node* ptr)
{
    node*temp=ptr->next;
    swap(ptr->data, temp->data);
    ptr->next=ptr->next->next;
    delete(temp);
}
 void traverse(node * head)
{
       node*temp=head;
       while(temp!=NULL)
       {
              cout<<temp->data<<"\n";
              temp=temp->next;
       }
}


int main()
{
       node *head = new node(20);
       head->next=new node(30);
       
       head->next->next = new node(40);
       head->next->next->next = new node(50);

       deleteNode(head->next);
       traverse(head);

       return 0;
}
