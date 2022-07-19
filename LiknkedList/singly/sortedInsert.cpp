#include <bits/stdc++.h>
using namespace std;
struct node{
       int data;
       node*next;
       node(int x)
       {
              data=x;
              next=NULL;
       }
};
void traverse(node *head)
{
   node * temp=head;
   while(temp!=NULL)
   {
      cout<<temp->data<<"\n";
      temp=temp->next;

   }
}
node *insert(node *head,int data)
{
       node *temp=new node(data);
       node *p=head;
       if(data<head->data)
       {
              temp->next=p;
              return temp;
       }
       while( p->next!=NULL  && p->next->data<data)
       {
              p=p->next;
       }
       temp->next=p->next;
       p->next=temp;
       return head;

}
int main(){
   node *head=new node(20);
   head->next=new node(30);
   head->next->next=new node(50);
   head=insert(head,10);
   traverse(head);

  return 0;
}
