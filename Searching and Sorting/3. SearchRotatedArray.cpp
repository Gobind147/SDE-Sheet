//Given a sorted and rotated array A of N distinct elements which is rotated at some point, and given an element K.
//The task is to find the index of the given element K in the array A.
//https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array0959/1



#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int low=0;
        int high=n-1;
        int count=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==x)
            count=mid;
            if(arr[low]<arr[mid])
            {
                if(x>=arr[low]&&x<arr[mid])
                high=mid-1;
                else
                low=mid+1;
            }
            else
            {
                if(x>arr[mid]&&x<=arr[high])
                low=mid+1;
                else
                high=mid-1;
            }
        }
        if(count!=0)
        {
            cout<<count<<endl;
        }
        else
        cout<<"-1"<<endl;
    }

    return 0;
}
