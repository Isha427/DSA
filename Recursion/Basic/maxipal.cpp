#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum(int arr[],int n) {
        if(n==0) {
                return arr[0];
        }else if(n==1) {
            if(arr[0]>arr[1])
                return max(arr[0],arr[0]+arr[1]);
            else
                return max(arr[1],arr[0]+arr[1]);
        }
        return max(sum(arr,n-2)+arr[n],sum(arr,n-1));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<sum(arr, n);
    return 0;
}