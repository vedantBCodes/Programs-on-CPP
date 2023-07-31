#include<iostream>
#include<string.h>
using namespace std;
 
void stringCopy(char str[])
{
    char copystr[40];
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        copystr[i]=str[i];
    }
    copystr[len]='\0';
    cout<<"Copied string "<<copystr;
}
int main()
{
    char str[40];
    cout<<"Enter a string:";
    cin.getline(str,40);
    stringCopy(str);
   return 0;
}
