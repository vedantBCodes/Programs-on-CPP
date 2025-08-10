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
string removeDuplicates(string str)   //better approach using string
{
   string newStr="";
   int len=str.size();
   for(int i=0;i<len;i++)
   {
       if(newStr.find(str[i])==string::npos)
       {
           newStr.push_back(str[i]);
       }
   }
   return newStr;
}
int main()
{
    char str[]="mahananda";
    char *str2=removeDuplicates(str);
    cout<<"Given string after removing all the duplicate characters is "<<str2;
   return 0;
}
