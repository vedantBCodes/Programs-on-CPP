#include <iostream>
#include <string.h>
using namespace std;

bool checkPallindrome(char str[])
{
    bool check=true;
    int size=strlen(str);
   for(int i=0;i<size;i++)
    {
        if(str[i]!=str[size-1-i])
        {
            check=false;
            return check; 
        }
    }
    return check;
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