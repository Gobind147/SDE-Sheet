//Merge two sorted arrays
//Given two sorted arrays, the task is to merge them in a sorted manner.
//https://www.geeksforgeeks.org/merge-two-sorted-arrays/


#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        int arr1[m];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>arr1[i];
        }
        int i=0;
        int j=0;
        while(i<n&&j<m)
        {
            if(arr[i]<=arr1[j])
            {
                cout<<arr[i]<<" ";
                i++;
            }
            else
            {
                cout<<arr1[j]<<" ";
                j++;
            }
        }
            while(i<n)
            {
                cout<<arr[i]<<" ";
                i++;
            }
            while(j<m)
            {
                cout<<arr1[j]<<" ";
                j++;
            
        }
        
    }

    return 0;
}
