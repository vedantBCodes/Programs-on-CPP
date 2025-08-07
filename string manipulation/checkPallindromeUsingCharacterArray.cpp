#include <iostream>
#include <string.h>
using namespace std;

bool checkPallindrome(char str[])
{
   int size=strlen(str);
   for(int i=0;i<size/2;i++)
    {
        if(str[i]!=str[size-1-i])
        {
            return false; 
        }
    }
    return true;
}

int main()
{
  char str[30];
  cout<<"Enter a string to check whether it is pallindrome or not:";
  cin.getline(str,30);
  bool check;
  check=checkPallindrome(str);
  if(check==true)
  {
    cout<<str<<" is a pallindrome string";
  }
  else
  {
    cout<<str<<" is not a pallindrome string";
  }

    
}
