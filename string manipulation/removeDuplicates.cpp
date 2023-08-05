#include<iostream>
#include<string.h>
using namespace std;
 
char* removeDuplicates(char str[])
{
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]!=' ')
        {
        for(int j=i-1;j>=0;j--)
        {
            if(str[i]==str[j])
            {
                for(int k=i;k<len;k++)
                {
                   str[k]=str[k+1];
                }
                len--;
                i--;
            }
        }
        }
    }
    return str;
}
int main()
{
    char str[]="mahananda";
    char *str2=removeDuplicates(str);
    cout<<"Given string after removing all the duplicate characters is "<<str2;
   return 0;
}