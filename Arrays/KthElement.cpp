//K-th element of two sorted Arrays
//Given two sorted arrays arr1 and arr2 of size N and M respectively and an element K.
//The task is to find the element that would be at the k’th position of the final sorted array.
//https://practice.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1



#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,l;
        cin>>n>>m>>l;
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
        int arr3[n+m];
        int i=0,j=0,k=0;
        while(i<n && j<m)
        {
            if(arr1[i]<arr2[j])
            {
                arr3[k++]=arr1[i++];
            }
            else
            {
                arr3[k++]=arr2[j++];
            }
        }
        while(i<n)
        {
            arr3[k++]=arr1[i++];
        }
        while(j<m)
        {
            arr3[k++]=arr1[j++];
        }
        cout<<arr3[l-1]<<endl;
    }

    return 0;
}
