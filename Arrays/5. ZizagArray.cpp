//https://practice.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion1638/1
//Given an array Arr (distinct elements) of size N. Rearrange the elements of array in zig-zag fashion.
//The converted array should be in form a < b > c < d > e < f. 
//The relative order of elements is same in the output i.e you have to iterate on the original array only.


#include <iostream>
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
        for(int i = 0;i<n-1;i++)
        {
        if(i% 2 == 0 and arr[i]>arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
        else if(i % 2 == 1 and arr[i]<arr[i+1])
        {
            swap(arr[i] ,arr[i+1]);
        }
        
    }
    for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}
