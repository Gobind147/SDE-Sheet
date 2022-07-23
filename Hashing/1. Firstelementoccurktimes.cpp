//First element to occur k times
//Given an array of N integers. Find the first element that occurs atleast K number of times.
//https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1

//Time Complexity: O(n)
//Auxiliary Space: O(n)



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int count =-1;
        unordered_map<int,int> cm;
        for(int i=0;i<n;i++)
        {
            cm[arr[i]]++;
            if(cm[arr[i]]==k)
            {
                
                cout<<arr[i]<<endl;
                return 0;
            }
            
        }
        cout<<"-1"<<endl;
    }

    return 0;
}
