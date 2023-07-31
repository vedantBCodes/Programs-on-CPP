#include<iostream>
#include<string.h>
using namespace std;
 
void caseChange(char str[])
{
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        int x=int(str[i]);
        if((x>=65)&&(x<=90))
        {
            x=x+32;
            str[i]=char(x);
        }
        else
        {
            x=x-32;
            str[i]=char(x);
        }
    }
    cout<<str;
}
int main()
{
    char str[40];
    cout<<"Enter a string:";
    cin.getline(str,40);
    caseChange(str);
   return 0;
}