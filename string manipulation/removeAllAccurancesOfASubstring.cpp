/*
Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:

Find the leftmost occurrence of the substring part and remove it from s.
Return s after removing all occurrences of part.

A substring is a contiguous sequence of characters in a string.

Example 1:

Input: s = "daabcbaabcbc", part = "abc"
Output: "dab"
Explanation: The following operations are done:
- s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
- s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
- s = "dababc", remove "abc" starting at index 3, so s = "dab".
Now s has no occurrences of "abc".

Example 2:

Input: s = "axxxxyyyyb", part = "xy"
Output: "ab"
Explanation: The following operations are done:
- s = "axxxxyyyyb", remove "xy" starting at index 4 so s = "axxxyyyb".
- s = "axxxyyyb", remove "xy" starting at index 3 so s = "axxyyb".
- s = "axxyyb", remove "xy" starting at index 2 so s = "axyb".
- s = "axyb", remove "xy" starting at index 1 so s = "ab".
Now s has no occurrences of "xy".
*/

/*
NOTE :
Use the find() method to search for the substring within the string.
If the find() function returns a value other than std::string::npos, it means the substring is found.
If it returns std::string::npos, it means the substring is not found.
*/
#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str="daabcbaabcbc" , part="abc";
    int partLen=part.length();
    bool check=true;
    while(check!=false)
    {
        if(str.find(part)==std::string::npos) 
       {
           check==false;
           break;
       }
        int index=str.find(part);
        str.erase(index,partLen);
    }
    cout<<str;
    return 0;
}