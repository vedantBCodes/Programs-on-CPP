#include<iostream>
#include<string.h>
using namespace std;
 
void removeCharacters(char str[],char ch)
{
    bool isPresent=false;
   int len=strlen(str);
   for(int i=0;i<len;i++)
   {
    if(str[i]==ch)
    {
       for(int j=i;j<len;j++)
       {
        str[j]=str[j+1];
        isPresent=true;
       }
    }
   }
   if(isPresent==true)
   {
     cout<<str;
   }
   else
   {
    cout<<ch<<" is not there in "<<str;
   }
  
}
int main()
{
    char str[40];
    cout<<"Enter a string:";
    cin.getline(str,40);
    char x;
    cout<<"Enter the character you want to remove:";
    cin>>x;
    removeCharacters(str,x);
   return 0;
}