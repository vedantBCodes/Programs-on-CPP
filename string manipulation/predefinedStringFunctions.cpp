#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
 
int main()
{
    char str1[]="vedant";
    char str2[]="vedant";
    
    //1.strlen() -->Counts the length of a string

    int len1=strlen(str1);
    int len2=strlen(str2);
    cout<<"String Length of str1:"<<len1<<endl;
    cout<<"String Length of str2:"<<len2<<endl;

    //2.strcmp() -->Compaires two string(returns boolean value)

    if(strcmp(str1,str2)==0)
    {
        cout<<"strings are same";
    }
    else
    {
        cout<<"Strings are not same";
    }

     //3.strcpy  -->Copy string

    char str3[30];
     strncpy(str3,str1,len1);
     str3[len1]='\0';
     cout<<"\nCopied string : "<<str3<<endl;

   return 0;
}