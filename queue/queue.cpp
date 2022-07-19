#include <bits/stdc++.h>
using namespace std;
 queue<int>q;
 void enqueue(int c)
 { 
   q.push(c);
 }
 void dequeue()
 {
       q.pop();
 }
 void getrear()
 {
       cout<<q.back()<<" ";
 }
 void getfront()
 {
      cout<< q.front()<<' ';
 }
 
int main(){
 
  
   enqueue(10);
   enqueue(30);
   enqueue(40);
   enqueue(50);
   getfront();
   getrear();
   dequeue();
   getfront();
   getrear();
  return 0;
}
