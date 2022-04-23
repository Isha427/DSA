#include <bits/stdc++.h>
using namespace std;
//revise it
// Less Efficient
// int repeat(int arr[],int n)
// {
//       bool visit[n];
//       memset(visit,false,sizeof(visit));
//       for(int i=0;i<n;i++)
//       {
//         if(visit[arr[i]]==true)
//         {
//           return arr[i];
//         }
//         else{
//                visit[arr[i]]=false;
//         }
//       }

// } //time 0(n),space o(n);

//Efficient
int repeat(int arr[0],int n)
{
       	int slow = arr[0], fast = arr[0];

	do{
		slow = arr[slow];
		fast = arr[arr[fast]];
	
	}while(slow != fast);
	
	slow = arr[0];

	while(slow != fast)
	{
		slow = arr[slow];
		fast = arr[fast];
	}
	return slow;


}
int main(){
    int arr[] = {0, 2, 1, 3, 2, 2}, n= 6;

 cout << repeat(arr, n);
  return 0;
}
