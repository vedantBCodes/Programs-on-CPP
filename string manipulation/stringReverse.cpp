#include<iostream>
#include<string.h>
using namespace std;
 
void stringReverse(char str[])
{
    int len=strlen(str);
    int x=len-1;
    for(int i=0;i<(len/2);i++)
    {
        char temp=str[i];
        str[i]=str[x];
        str[x]=temp;
        x--;
    }
    cout<<"Reversed string "<<str;
}
int main()
{
    char str[40];
    cout<<"Enter a string:";
    cin.getline(str,40);
    stringReverse(str);
   return 0;
}