#include <bits/stdc++.h>
using namespace std;
class MinHeap{
    int *arr;
    int size;
    int capacity;
    
    public:
    
    MinHeap(int c){
    size = 0; 
    capacity = c; 
    arr = new int[c];
    }
int parents(int i)
{
       return ((i - 1) / 2);
}
int left(int i)
{
       return (2 * i + 1);
}
int rights(int i)
{
       return (2 * i + 2);
}
void insert(int x)
{
       arr[size] = x;
       size++;
       for (int i = size - 1; i != 0 && arr[parents(i)] > arr[i];)
       {
              swap(arr[i], arr[parents(i)]);
              i = parents(i);
       }
}

void minHeapify(int i)
{
       int l = left(i);
       int r = rights(i);
       int smallest = i;
       if (l < size && arr[smallest] > arr[l])
       {
              smallest = l;
       }
       else
       {
              smallest = i;
       }
       if (r < size && arr[smallest] > arr[r])
       {
              smallest = r;
       }
       if (i != smallest)
       {
              swap(arr[i], arr[smallest]);
              minHeapify(smallest);
       }
}

int extractMin()
{
       if (size <= 0)
       {
              return INT_MAX;
       }
       else if (size == 1)
       {
              size--;
              return arr[0];
       }
       else
       {
              swap(arr[0], arr[size - 1]);
              size--;
              minHeapify(0);
              return arr[size];
       }
}
void buildHeap()
{
       for (int i = (size - 2) / 2; i >= 0; i--)
       {
              minHeapify(i);
       }
}
void decreaseKey(int i, int x)
{
       if (arr[i] < x)
       {
              return;
       }
       else
       {
              arr[i] = x;
              while (i != 0 && arr[i] < arr[parents(i)])
              {
                     swap(arr[i], arr[parents(i)]);
                     i = parents(i);
              }
       }
}
void deleteKey(int i)
{
       decreaseKey(i, INT_MIN);
       extractMin();
}
};

int main()
{    MinHeap h1(11);
       h1.insert(5);
       h1.insert(6);
       h1.insert(34);
       h1.insert(62);
       h1.insert(16);
       h1.insert(64);
       h1.insert(36);
       h1.buildHeap();
       cout << h1.extractMin() << endl;
       h1.decreaseKey(2, 1);
       cout << h1.extractMin() << endl;

       return 0;
}
