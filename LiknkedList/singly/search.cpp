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


int search(node *head,int x)
{
   node * temp=head;
   int i=1;
   while(temp!=NULL)
   {  
      if(temp->data==x)
      {
             return i;
      }
      i++;
      temp=temp->next;

   }
   return -1;
}


int main(){
   node *head=new node(20);
   head->next=new node(30);
   head->next->next=new node(40);
   cout<<search(head,40);

  return 0;
}
