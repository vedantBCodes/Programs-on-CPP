#include<iostream>
#include<string.h>
using namespace std;
 
int wordsInASentense(char str[])
{
    int len=strlen(str);
    int cnt=0;
  for(int i=0;i<len;i++)
  {
    if(str[i]==' ')
    {
        cnt++;
    }
  }
  return cnt+1;
}
int main()
{
    char str[100];
    cout<<"Enter a string:";
    cin.getline(str,100);
    int cnt=wordsInASentense(str);
    cout<<"The number of words in "<<str<<" are "<<cnt;
}