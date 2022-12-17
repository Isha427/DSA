#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i)
{
       
       int l=2*i+1;
       int r=2*i+2;
       int larg=i;
       if(l<n&& arr[l]>arr[larg])
       {
              larg=l;
       }
       if(r<n && arr[r]>arr[larg])
       {
              larg=r;
       }
       if(i!=larg)
       {
              swap(arr[i],arr[larg]);
              heapify(arr, n,larg);

       }
}
void buildHeap(int arr[],int n)
{
       for(int i=(n-2)/2;i>=0;i--)
       {
              heapify(arr,n,i);
       }
}
void heapsort(int arr[],int n)
{
       buildHeap(arr,n);
       for(int i=n-1;i>0;i--)
       {
              swap(arr[0],arr[i]);
              heapify(arr,i,0);
       }
}
void printArray(int arr[],int n)
{
       for(int i=0;i<n;i++)
       {
              cout<<arr[i]<<" ";
       }
}
int main(){
int arr[] = {12, 11, 13, 5, 6, 7}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	heapsort(arr, n); 

	cout << "Sorted array is \n"; 
	printArray(arr, n); 
  return 0;
}
