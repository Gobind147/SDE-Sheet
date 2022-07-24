//Find first repeated character
//Given a string, find the first repeated character in it. 
//We need to find the character that occurs more than once and whose index of second occurrence is smallest
//https://practice.geeksforgeeks.org/problems/find-first-repeated-character/0
//https://www.geeksforgeeks.org/find-the-first-repeated-character-in-a-string/


//Time complexity : O(n) 
//Auxiliary Space : O(n)


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        unordered_set<char> h;
        for(int i=0;i<h.size();i++)
        {
            char c = s[i];
            if (h.find(c) != h.end())
            {
            cout<< c;
            return 0;
        }
            else 
            h.insert(c);
        }
        
    }

    return 0;
}
