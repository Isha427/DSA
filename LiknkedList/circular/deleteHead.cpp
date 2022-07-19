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
// naive
// node * deleteBegin(node * head){
//        if(head==NULL){
//               return NULL;
//        }
      
//        node * temp=head;
//        while(temp->next!=head){
//               temp=temp->next;

//        }
//        temp->next=head->next;
//        delete(head);
//        return temp->next;

// }
//Efficient
 node * deleteBegin(node * head){
       node *p=head->next;
       if(head==NULL){
           
            return NULL;
       }
        if(head->next==head){
            delete(head);
            return NULL;
       }
       
       swap(head->data,p->data);
       head->next=p->next;
       delete(p);
       return head;

}

int main(){
    node * head=new node(20);
    head->next=new node(30);
    head->next->next=new node(40);
    head->next->next->next=new node(50);
    head->next->next->next->next=head;
    
    head=deleteBegin(head);
    traversal(head);
   
}
