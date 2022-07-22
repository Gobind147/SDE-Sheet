//https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1
//Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.



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
        for(int i=0;i<n-1;i++)
        {
            cin>>arr[i];
        }
        int sum=0;
      for(int i=0;i<n-1;i++){
         sum+=arr[i];
      }
      cout<< ((n*(n+1))/2)-sum<<endl;
    }

    return 0;
}
