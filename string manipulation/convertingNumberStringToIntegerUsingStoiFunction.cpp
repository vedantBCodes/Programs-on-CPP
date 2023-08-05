#include<iostream>
using namespace std;
 
int  stringToIntegerUsingStoi(char str[])
{
   int num;
   num=stoi(str);//stoi() is a predefined function that converts a string to an integer
   return num;
} 
int main()
{
   char str[]="123";  //str is a number string
   int num=stringToIntegerUsingStoi(str);
   cout<<"Converted number string:"<<num;
   return 0;
}