#include<iostream>
#include<string.h>
using namespace std;

void stringConcatenation(char str1[],char str2[])
{
    int len1=strlen(str1);
    int len2=strlen(str2);
    str1[len1]=' ';
    len1++;
    for(int i=0;i<len2;i++)
    {
        str1[len1]=str2[i];
        len1++;
    }
    cout<<"Concatenated string "<<str1;
}
 
int main()
{
    char str1[40];
    char str2[40];
    cout<<"Enter 1st string:";
    cin.getline(str1,40);
     cout<<"Enter 2nd string:";
    cin.getline(str2,40);
    stringConcatenation(str1,str2);
   return 0;
}