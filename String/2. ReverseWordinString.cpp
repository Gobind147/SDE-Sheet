//Reverse words in a given string
//https://www.geeksforgeeks.org/reverse-words-in-a-given-string/
//https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1



#include  <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        string s;
        getline(cin,s);
        vector<string> temp;
        string str ="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                temp.push_back(str);
                str="";
            }
            else
            str= str+s[i];
        }
        temp.push_back(str);
        for(int i=temp.size()-1;i>0;i--)
         cout << temp[i] << " ";
   
    cout << temp[0] << endl;
    }

    return 0;
}
