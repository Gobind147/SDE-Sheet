//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
//Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.


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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long count1=0,count2=0,count3=0;
        for(long long i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                count1++;
            }
            else if(a[i]==1)
            {
                count2++;
            }
            else if(a[i]==2)
            {
                count3++;
            }
        }
        for(long long i=0;i<count1;i++)
        {
            cout<<"0"<<" ";
        }
        for(long long i=count1;i<count1+count2;i++)
        {
            cout<<"1"<<" ";
        }
        for(long long i=count1+count2;i<count1+count2+count3;i++)
        {
            cout<<"2"<<" ";
        }
    }

    return 0;
}
