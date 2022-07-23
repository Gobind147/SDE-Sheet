//Find all pairs with a given sum
//Given two unsorted arrays A of size N and B of size M of distinct elements,
//the task is to find all pairs from both arrays whose sum is equal to X.
//https://practice.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x5808/1


//Time Complexity: O(max(n, m)) 
//Auxiliary Space: O(n)



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x;
        cin>>n>>m>>x;
        int arr1[n];
        int arr2[m];
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>arr2[i];
        }
        unordered_set<int> s;
        for(int i=0;i<n;i++)
        s.insert(arr1[i]);
        for(int j=0;j<m;j++)
        {
            if(s.find(x-arr2[j]) !=s.end())
            {
                cout<<arr2[j]<<" "<<x-arr2[j]<<endl;
            }
            
        }
    }

    return 0;
}
