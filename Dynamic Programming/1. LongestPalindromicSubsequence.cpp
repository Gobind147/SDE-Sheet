//Longest Palindromic Subsequence
//Given a sequence, find the length of the longest palindromic subsequence in it.
//https://www.geeksforgeeks.org/longest-palindromic-subsequence-dp-12/
//https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string/0

//Time Complexity: O(n^2)
//Auxiliary Space: O(n^2)



#include<bits/stdc++.h>
using namespace std;

int longestCommonSubsequence(string x, string y) {
        int m=x.length();
        int n=y.length();
        int dp[m+1][n+1];
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(x[i-1]==y[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
    

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    string t=s;
    reverse(t.begin(),t.end());
    cout<< longestCommonSubsequence( s, t)<<endl;
    }

    return 0;
}
