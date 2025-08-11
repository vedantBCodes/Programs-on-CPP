#include<iostream>
#include<string.h>
using namespace std;

void reversingAllWords(char str[])
{
    bool isPresent=false;
   int len=strlen(str);
   int y=0;
   int cnt=0;
   int z=0;
   for(int i=0;i<=len;i++)
   {
    if((str[i]==' ')||(i==len))
    {
       int x=i-1;
    for(int j=y;j<(y+(cnt/2));j++)
    {
        char temp=str[j];
        str[j]=str[x];
        str[x]=temp;
        x--;
    }
    z++;
    y=i+1;
    cnt=0;
    }
     else
    {
       cnt++;
    }
   }
   if(z>1)
   {
     cout<<"Entered string after removing all the words : "<<str;
   }
   else
   {
    cout<<"There is a single word in a string";
   }
}
void reversingAllWords2(string str)  //better approach
{
    int len = str.size();
    int start = 0, end = 0;

    for(int i = 0; i <= len; i++)
    {
        if(i == len || str[i] == ' ')
        {
            end = i;
            // Reverse the word from start to end-1
            for(int j = start; j < start + (end - start) / 2; j++)
            {
                char temp = str[j];
                str[j] = str[end - 1 - (j - start)];
                str[end - 1 - (j - start)] = temp;
            }
            start = i + 1;
        }
    }
    cout << "Entered string after reversing all the words: " << str << endl;
}

int main()
{
    char str[40];
    cout<<"Enter a string:";
    cin.getline(str,40);
    reversingAllWords(str);
   return 0;
}
