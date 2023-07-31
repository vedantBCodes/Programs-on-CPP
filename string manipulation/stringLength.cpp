#include<iostream>
#include<string.h>
using namespace std;
 
void stringLength(char str[])
{
    int cnt=0;
    int i=0;
    while(str[i]!='\0')
    {
        cnt++;
        i++;
    }
    cout<<"String length:"<<cnt;
}
int main()
{
    char str[40];
    cout<<"Enter a string:";
    cin.getline(str,40);
    stringLength(str);
   return 0;
}