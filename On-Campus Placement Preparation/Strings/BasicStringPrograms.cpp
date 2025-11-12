/*

Function1 : Input and display a string
Function2 : Find the length of a string (without using strlen())
Function3 : Copy one string to another (without strcpy())
Function4 : Compare two strings (without strcmp())
Function5 : Convert string to uppercase
Function6 : Convert string to lowercase

*/

#include<iostream>
#include<string>
using namespace std;

void function1(string str)
{
    cout<<"Entered string : "<<str;
}

void function2(string str)
{
    int cnt=0;
    int i=0;
    while(str[i]!='\0')
    {
        cnt++;
        i++;
    }
    cout<<"Lenght of Entered string : "<<cnt;
}

void function3(string str)
{
    string strCpy = "";
    int i=0;
    while(str[i]!='\0')
    {
        strCpy += str[i];
        i++;
    }
    cout << "Copied string : " << strCpy;
}

void function4(string str,string str2)
{
    int i=0;
    while(str[i]!='\0' && str2[i]!='\0')
    {
        if(str[i]>str2[i])
        {
            cout<<str<<" is greater than "<<str2;
            return;
        }
        else if (str[i]<str2[i])
        {
            cout<<str2<<" is greater than "<<str;
            return;
        }
        i++;
    }
    if(str[i]=='\0' && str2[i]=='\0')
    {
        cout<<"Both the strings are same";
    }
    else if (str[i] == '\0')
    {
        cout << str2 << " is greater than " << str;
    }
    else
    {
        cout << str << " is greater than " << str2;
    }
}

void function5(string str)
{
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if((ch >= 97) && (ch <= 12))
        {
            ch=ch-32;
            str[i]=ch;
        }
    }
    cout<<"Uppercase string is : "<<str;
}

void function6(string str)
{
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if((ch >= 65) && (ch <= 90))
        {
            ch=ch+32;
            str[i]=ch;
        }
    }
    cout<<"Lowercase string is : "<<str;
}

int main()
{
    string str="VEDAnt";
    // cout<<"Enter a string :";
    // getline(cin,str);
    function3(str);
}