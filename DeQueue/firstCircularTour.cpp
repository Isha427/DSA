#include <bits/stdc++.h>
using namespace std;
int firsttour(int petrol[],int dist[],int size){
    int start=0;int currPetrol=0;
    int prevPetrol=0;
    for(int i=0;i<size;i++)
    {
      currPetrol+=(petrol[i]-dist[i]);
      if(currPetrol<0)
      {
        start=i+1;
        prevPetrol=currPetrol;
        currPetrol=0;


      }
    }
    return((currPetrol+prevPetrol>=0)?start+1:-1);
}
int main(){
  int petrol[]={6,3,7};
  int dist[]={4,6,3};
  int size=3;
  cout<<firsttour(petrol,dist,size);
  return 0;
}
