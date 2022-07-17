//Binary Search
//Given a sorted array arr[] of n elements, write a function to search a given element x in arr[] and return the index of x in the array.
//https://www.geeksforgeeks.org/binary-search/

#include <iostream>
using namespace std;
int binarysearch(int arr[],int x,int n)
{
        int l=0;
        int r = n-1;
        while(l<=r)
        {
        int m = l + (r-l)/2;
        if(arr[m]==x)
        {
            return m;
        }
        if(arr[m]>x)
        r=m-1;
        else
        l=m+1;
        
        }
        return -1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<< binarysearch(arr,x,n)<<endl;
    }
    return 0;
}
