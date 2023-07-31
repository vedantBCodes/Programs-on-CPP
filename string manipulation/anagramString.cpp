#include <iostream>
#include <string.h>
using namespace std;

bool anagramString(char str1[], char str2[])
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

int main()
{
    char str1[40];
    cout << "Enter a string:";
    cin.getline(str1, 40);
    char str2[40];
    cout << "Enter another string:";
    cin.getline(str2, 40);
    if(anagramString(str1, str2)==true)
    {
        cout<<"Strings are anagram";
    }
    else
    {
        cout<<"Strings are not anagram";
    }
    return 0;
}