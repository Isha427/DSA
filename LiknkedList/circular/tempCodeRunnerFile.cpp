#include <bits/stdc++.h>
using namespace std;
struct node{
       node* next;
       int data;
       node (int x)
       {
          data=x;
          next=NULL;
       }

};
void traversal(node * head){
       // if(head==NULL){cout<<"null";return;}
       node * temp=head;
       do
       {
              cout<<temp->data<<" ";
              temp=temp->next;
       }while(temp!=head);
}
node * insertBegin(node * head,int x){
       if(head==NULL){
              return NULL;
       }
       node *p=new node(x);
       node * temp=head;
       while(temp->next!=head){
              temp=temp->next;

       }
       temp->next=p;
       p->next=head;
       return p;

}
int main(){
    node * head=new node(20);
    head->next=new node(30);
    head->next->next=new node(40);
    head->next->next->next=new node(40);
    head->next->next->next->next=head;
    
    head=insertBegin(head,60);
    traversal(head);
   
}
