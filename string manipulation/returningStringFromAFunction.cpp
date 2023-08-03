#include<iostream>
#include<string.h>
using namespace std;
char* print(char str[])
{
  int len=strlen(str);
  for(int i=0;i<len;i++)
  {
     if(str[i]=='v')
     {
        str[i]='k';
     }
  }
return str;
}
int main()
{
   char str1[]="vedant";
   char *str;
   str=print(str1);
   cout<<str;
}
