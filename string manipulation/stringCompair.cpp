#include<iostream>
#include<string.h>
using namespace std;

bool stringCompair(char str1[],char str2[])
{
    if(strlen(str1)==strlen(str2))
    {
        for(int i=0;i<strlen(str1);i++)
        {
            if(str1[i]!=str2[i])
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        return false;
    }


}
int main()
{
    char str1[40];
    char str2[40];
    cout<<"Enter 1st string:";
    cin.getline(str1,40);
     cout<<"Enter 2nd string:";
    cin.getline(str2,40);
    bool check=stringCompair(str1,str2);
    if(check==true)
    {
        cout<<"Strings are same";
    }
    else
    {
        cout<<"Strings are not same";
    }
    
}