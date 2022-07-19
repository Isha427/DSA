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
node * deleteHead(node * head){
       if(head==NULL){
              return NULL;
       }
      
       node * temp=head;
       while(temp->next!=head){
              temp=temp->next;

       }
       temp->next=head->next;
       delete(head);
       return temp->next;

}
node * deleteK(node * head,int x){
       if(head==NULL){
              return NULL;
       }
       if(x==1){
              head=deleteHead(head);
              return head;
       }
      node*temp=head;
      int count=1;
       while(count<x-1){
              temp=temp->next;
              count++;

       }
       node*p=temp->next;
       temp->next=temp->next->next;
       
       delete(p);
       return head;

}
int main(){
    node * head=new node(20);
    head->next=new node(30);
    head->next->next=new node(40);
    head->next->next->next=new node(50);
    head->next->next->next->next=head;
    
    head=deleteK(head,3);
    traversal(head);
   
}
