#include<iostream>
#include<string.h>
using namespace std;

bool isSubstring(char str[],char subStr[])
{
    int len1=strlen(str);
    int len2=strlen(subStr);
    int x,cnt;
    bool check=false;
    for(int i=0;i<len1;i++)
    {
        x=0;
        cnt=0;
        if(str[i]==subStr[0])
        {
            for(int j=i;j<(i+len2);j++)
            {
                if(str[j]==subStr[x])
                {
                    cnt++;
                    x++;
                }
            }
            if(cnt==len2)
            {
                check=true;
            }
        }
    }
    if(check==true)
     {
         return true;
     }
    else
     {
         return false;
     }
}

int main()
{
    char str[50];
    char subStr[30];
    cout<<"Enter a string:";
    cin.getline(str,40);
    cout<<"Enter a substring you want to search:";
    cin.getline(subStr,20);
    bool check=isSubstring(str,subStr);
    if(check==true)
    {
        cout<<subStr<<" is substring of "<<str;
    }
    else
    {
        cout<<subStr<<" is not a substring of "<<str;
    }
}
