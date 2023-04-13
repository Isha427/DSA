#include<bits/stdc++.h>
#include<vector>
using namespace std;
string solve(int n1,int n2,string &text1, string &text2,vector<vector<int>>&dp)
        {
            if(n1<0 ||n2<0)
            {
                return "";
            }
            if(dp[n1][n2]!=-1)return dp[n1][n2];
            if(text1[n1]==text2[n2])
            {   
                return dp[n1][n2]=text1[n1]+solve(n1-1,n2-1,text1,text2,dp);
            }
            else return dp[n1][n2]=max(solve(n1,n2-1,text1,text2,dp,v),solve(n1-1,n2,text1,text2,dp));
        }
       void all_longest_common_subsequences(string text1, string text2)
		{
		    int n1=text1.size();
            int n2=text2.size();
            vector<vector<int>>dp(n1,vector<int>(n2,-1));
            
            
            =solve(n1-1,n2-1,text1,text2,dp);
           
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i];
            }
          
            
		}
int main()
{
        all_longest_common_subsequences("abaaa"," baabaca");
        return 0;
}