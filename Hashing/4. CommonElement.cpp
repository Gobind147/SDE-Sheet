//Common Elements
//Given two lists V1 and V2 of sizes n and m respectively. 
//Return the list of elements common to both the lists and return the list in sorted order. Duplicates may be there in the output list.
//https://practice.geeksforgeeks.org/problems/common-elements5420/1


//Time Complexity: O(n+m) 
//Space complexity: O(n+m)


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr1[n];
        int arr2[m];
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>arr2[i];
        }
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr1[i]]++;
        }
        for(int i=0; i<m ; i++)
        {
           if(mp.find(arr2[i])!=mp.end())
            {
                cout<<arr2[i]<<endl;
            }
        }
    }
    return 0;
}
