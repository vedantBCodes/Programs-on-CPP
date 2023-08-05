#include<iostream>
#include<string.h>
using namespace std;
 
int  stringToInteger(char str[])
{
   int strLength=strlen(str);
   int num=0;
   int x;
   for(int i=0;i<strLength;i++)
   {
      x=int(str[i]);  //Here value of x will be the ascii value of str1[i]
      x-=48;  //ASCII value of 0-9 ranges from 48 to 57
      num=x+(num*10);
   }
   return num;
} 
int main()
{
   char str[]="123";  //str is a number string
   int num=stringToInteger(str);
   cout<<"Converted number string:"<<num;
   return 0;
}