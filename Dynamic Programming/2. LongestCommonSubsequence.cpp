//Longest Common Subsequence
//Given two sequences, find the length of longest subsequence present in both of them. Both the strings are of uppercase.
//https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/
//https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1



#include <iostream>
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
    string t;
    cin>>t;
    cout<< longestCommonSubsequence( s, t)<<endl;
    }
    return 0;
}
