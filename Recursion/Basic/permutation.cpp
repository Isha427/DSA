#include <bits/stdc++.h>
using namespace std;
vector<string> v;

int isPalindrome(string S)
{
    string P = S;
 
    reverse(P.begin(), P.end());
 
    if (S == P) {
        return 1;
    }
    else {
        
        return 0;
    }
}

vector<string> permute(string a, int l, int r)
{   
	if (l == r){
		if(isPalindrome(a)){
		    v.push_back(a);
		}}
	else
	{
		for (int i = l; i <= r; i++)
		{

			swap(a[l], a[i]);

			permute(a, l+1, r);

			swap(a[l], a[i]);
		}
	}
	return v;
}
int main()
{
	string str;
	cin>>str;
	int n = str.size();
	permute(str, 0, n-1);
	sort(v.begin(),v.end());
	if(v.empty())
	cout<<"-1";
	else
	cout<<v[v.size()-1];
	
	return 0;
}