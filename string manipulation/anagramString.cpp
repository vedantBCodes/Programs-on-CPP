#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

bool anagramString1(char str1[], char str2[])
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    bool check=true;
    int cnt;
    if (len1 == len2)
    {
        for (int i = 0; i < len1; i++)
        {
            cnt=0;
            for(int j=0;j<len1;j++)
            {
            if (str1[i] == str2[j])
            {
               cnt++;
            }
            }
            if(cnt==0)
            {
                return false;
            }
        }
        return true;
       
    }
    else
    {
        return false;
    }
   
}
bool anagramString2(string str1, string str2)  //Best approach
{
    if (str1.length() != str2.length()) {
        return false;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return str1 == str2;
}

int main()
{
    char str1[40];
    cout << "Enter a string:";
    cin.getline(str1, 40);
    char str2[40];
    cout << "Enter another string:";
    cin.getline(str2, 40);
    if(anagramString1(str1, str2)==true)
    {
        cout<<"Strings are anagram";
    }
    else
    {
        cout<<"Strings are not anagram";
    }
    return 0;
}
