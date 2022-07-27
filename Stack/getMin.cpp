#include <bits/stdc++.h>
using namespace std;
struct stacks{
       
       int min;
       stack<int>s;
       void push(int c)
       {
              if(s.empty())
              {
                     min=c;
                     s.push(c);
                     
              }
              else if(min>=c)
              {
                     s.push(c-min);
                     min=c;
              }
              else{
                     s.push(c);
              }
       }
       void pop()
       {       
              if(s.top()<0)
              {
                     min=min-s.top();
                     s.pop();
              }
              else(s.pop());
              
       }
       int top()
       {
              (s.top()>=0)?s.top():min;
       }
       int getsmin()
       {
              return min;
       }
};
int main(){
  stacks s;
    s.push(4);
    s.push(5);
    s.push(8);
    s.push(1);
    s.pop();
 
    cout<<" Minimum Element from Stack: " <<s.getsmin();
  
    return 0; 
  return 0;
}
