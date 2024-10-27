#include <iostream>
#include<string>
#include <algorithm>    //For reverse function
using namespace std;

bool isPallindrome(string str)
{
    int len=str.length();
    string str1=str.substr(0,len/2);
    string str2=str.substr(len/2+1,len);
    reverse(str2.begin(),str2.end());
    if(str1==str2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str="mahananda";
    if(isPallindrome(str))
    {
        cout<<str<<" is pallindromic string";
    }
    else
    {
        cout<<str<<" is not a pallindromic string";
    }
}