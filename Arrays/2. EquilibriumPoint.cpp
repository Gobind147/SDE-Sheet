//https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1
//Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array. 
//Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.
//Note: Retun the index of Equilibrium point. (1-based index)



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
        int sum=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
        }
        int left=0;
        int right=0;
        int num=0;
        for(int i=0;i<n;i++)
        {
             left=count;
             right=sum-arr[i]-left;
             
             if(left==right)
            {
            num=i+1;
            break;
            }
        count = count+arr[i];
        }
        if(n==1)
        {
            cout<<"1"<<endl;
        }
        else if(left==right)
        {
            cout<<num<<endl;
        }
        else
        cout<<"-1"<<endl;
    }

    return 0;
}
