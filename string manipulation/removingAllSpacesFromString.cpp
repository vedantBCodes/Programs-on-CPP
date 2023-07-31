#include<iostream>
#include<string.h>
using namespace std;
 
void removeSpaces(char str[])
{
    bool isPresent=false;
   int len=strlen(str);
   for(int i=0;i<len;i++)
   {
    if(str[i]==' ')
    {
       for(int j=i;j<len;j++)
       {
        str[j]=str[j+1];
        isPresent=true;
       }
       len--;
    }
   }
   if(isPresent==true)
   {
     cout<<"Entered string without spaces : "<<str;
   }
   else
   {
    cout<<"There are no spaces in a given string";
   }
}
int main()
{
    char str[40];
    cout<<"Enter a string:";
    cin.getline(str,40);
    removeSpaces(str);
   return 0;
}