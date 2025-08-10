#include<iostream>
#include<string.h>
using namespace std;

void extractingUniqueChracters(char str[])
{
    int cnt;
    int len=strlen(str);
    cout<<"Unique character in "<<str<<" are ";
    for(int i=0;i<len;i++)
    {
        cnt=0;
        if(str[i]!=' ')
        {
        for(int j=0;j<len;j++)
        {
            if(str[i]==str[j])
            {
                cnt++;
            }
        }
         if(cnt==1)
            {
                cout<<str[i]<<" ";
            }
        }
    }
}
string extractingUniqueChracters2(string str) // Best approach using String
{
   int size = str.size();
   string newStr ="";
   for(int i=0;i<size;i++)
   {
       bool check=true;
       for(int j=0;j<newStr.size();j++)
       {
           if(str[i]==newStr[j])
           {
               check=false;
               break;
           }
       }
       if(check==true)
       {
           newStr.push_back(str[i]);
       }
   }
   return newStr;
}

int main()
{
    char str[]="abcdbg";
    extractingUniqueChracters(str);
   return 0;
}
