#include<bits/stdc++.h>
using namespace std;
int main()
{       int arr[10]={4,8,3,6,2,9,5,2,0,1};
        int low=0,high=9;
        while(low <high)
        {
               int temp=arr[low];
               arr[low]=arr[high];
               arr[high]=temp;
               low++;
               high--;
        }
        for(int i=0;i<10;i++)
        {
               cout<<arr[i]<<" ";
        }

       return 0;
}