#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name1[50];
    char name2[50];
    cout<<"Enter your name:";
    cin>>name1;
    cout<<"Enter his/her name:";
    cin>>name2;
    strcat(name1,name2);
    int len=0;
    len=strlen(name1);
    int cnt1=0,cnt2=0;
    for(int i=0;i<len;i++)
    {
        if((name1[i]=='t')||(name1[i]=='r')||(name1[i]=='u')||(name1[i]=='e'))
        {
            cnt1++;
        }
        if((name1[i]=='l')||(name1[i]=='o')||(name1[i]=='v')||(name1[i]=='e'))
        {
            cnt2++;
        }
    }
    cout<<"Your love percentage is "<<cnt1<<cnt2;
   
}