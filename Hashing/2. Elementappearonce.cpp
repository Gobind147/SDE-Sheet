//Find the element that appears once in sorted array
//Given a sorted array arr[] of size N. Find the element that appears only once in the array. All other elements appear exactly twice. 
//https://practice.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array0624/1



//Time Complexity: O(n)
//Auxiliary Space: O(1) 
  

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int xorr=0;
        for(int i=0;i<n;i++)
        {
            xorr=xorr^arr[i];
        }
    cout<<xorr<<endl;
    }

    return 0;
}
