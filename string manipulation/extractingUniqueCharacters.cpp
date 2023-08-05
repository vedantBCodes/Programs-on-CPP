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
int main()
{
    char str[]="abcdbg";
    extractingUniqueChracters(str);
   return 0;
}