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
int main(){
    node * head=new node(20);
    head->next=new node(30);
    head->next->next=new node(40);
    head->next->next->next=new node(40);
    head->next->next->next->next=head;
    
    traversal(head);
   
}
