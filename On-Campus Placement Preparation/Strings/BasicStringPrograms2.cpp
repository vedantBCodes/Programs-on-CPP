/*

function1 : Toggle case of each character
function2 : Count vowels and consonants
function3 : Count digits, alphabets, and special characters
function4 : Count words in a string 
function5 : Reverse a string (without using built-in functions)
function6 : Check if a string is palindrome or not
function7 : Concatenate two strings (without strcat())

*/

#include<iostream>
#include<string>
using namespace std;

void function1(string str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    cout << "Toggled String: " << str << endl;
}

void function2(string str)
{
   int vowels = 0, consonants = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
}

void function3(string str)
{
    int i=0;
    int digits=0;
    int alphabets=0;
    int specialCharacters=0;
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphabets++;
        }
        else if(str[i]>=48 && str[i]<=57)
        {
            digits++;
        }
        else
        {
            specialCharacters++;
        }
        i++;
    }
    cout<<"Alphabets : "<<alphabets<<endl;
    cout<<"Digits : "<<digits<<endl;
    cout<<"special Characters : "<<specialCharacters<<endl;
}

void function4(string str)
{
    int count = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || 
            (str[i] >= 'A' && str[i] <= 'Z') || 
            (str[i] >= '0' && str[i] <= '9'))
        {
            if (!inWord)
            {
                count++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }

    cout << "Number of words: " << count;
}

void function5(string str)
{
    int i=0;
    int size=str.length();
   for(int i=0;i< (size / 2) ;i++)
   {
    swap(str[i],str[size-1-i]);
   }
    cout<<"Reversed String : "<<str;
}

bool function6(string str)
{
    int i=0;
    int size=str.length();
   for(int i=0;i< (size / 2) ;i++)
   {
    if(str[i]!=str[size-1-i])
    {
       return false;
    }
   }
   return true;
}

void function7(string str1,string str2)
{
  for (int i = 0; str2[i] != '\0'; i++)
        str1.push_back(str2[i]);

    cout << "Concatenated String: " << str1 << endl;
}

int main()
{
    string str="vedant"; 
    string str2="yeotikar";
    function7(str , str2);

}