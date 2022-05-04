#include <iostream>
#include <vector>
using namespace std;
int sum(vector<int> v, int n,int d,int arr[])
{      v[0] = arr[0];
        
       while (true)
       {
              for (int i = 1; i < d; i++)
              {
                     v[i] = v[i - 1] + arr[i];
                     if (v[i] >= n)
                     {
                            return ((i + 1) % d);
                            
                     }
                     
              }
              v[0] = arr[0] + v[d - 1];
              
       }
}
int main()
{
       int t;
       cin >> t;
       while (t--)
       {
              long long int n;
              int d;
              cin >> n >> d;
              int arr[d];
              for (int i = 0; i < d; i++)
              {
                     cin >> arr[i];
              }
              int c = 0;
              vector<int> v(arr, arr + d);
             cout<< sum(v,n,d,arr);
       }
       return 0;
}
