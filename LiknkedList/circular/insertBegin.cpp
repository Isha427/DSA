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
// Naive
// node * insertBegin(node * head,int x){
       // node *p=new node(x);
//        if(head==NULL){
//             p->next=p;
//             return p;
//        }
//        node *p=new node(x);
//        node * temp=head;
//        while(temp->next!=head){
//               temp=temp->next;

//        }
//        temp->next=p;
//        p->next=head;
//        return p;

// }
//Efficient
 node * insertBegin(node * head,int x){
       node *p=new node(x);
       if(head==NULL){
            p->next=p;
            return p;
       }
       p->next=head->next;
       head->next=p;
       swap(head->data,p->data);
       return head;

}

int main(){
    node * head=new node(20);
    head->next=new node(30);
    head->next->next=new node(40);
    head->next->next->next=new node(50);
    head->next->next->next->next=head;
    
    head=insertBegin(head,60);
    traversal(head);
   
}
