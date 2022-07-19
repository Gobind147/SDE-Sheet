https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
Given an array A of positive integers. Your task is to find the leaders in the array.
An element of array is leader if it is greater than or equal to all the elements to its right side.
The rightmost element is always a leader.


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
        int max=arr[n-1];
        cout<<max<<endl;
        for(int i=n-2;i>=0;i--)
        {
            if(max<arr[i])
            {
                max=arr[i];
                cout<<max<<endl;
            }
        }
    }

    return 0;
}
