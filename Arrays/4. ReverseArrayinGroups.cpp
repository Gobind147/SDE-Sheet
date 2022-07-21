//https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1
//Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.


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
        int k;
        cin>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i += k)
        {
        int left = i;
        int right = min(i + k - 1, n - 1);
        while (left < right)
            swap(arr[left++], arr[right--]);
 
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }

    return 0;
}
