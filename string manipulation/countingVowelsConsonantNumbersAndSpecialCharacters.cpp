#include <iostream>
using namespace std;

int main()
{
    char str[40];
    cout << "Enter a string:";
    cin.getline(str, 40);
    int v=0,c=0,n=0,sp=0; 
    //Here v stands for vowels,c for consonant,n for numbers and sp stands for special characters
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
    if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u') || (str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U'))
    {
        v++;
    }
    else if(((str[i]>='a')&&(str[i]<='z'))||((str[i]>='A')&&(str[i]<='Z')))
    {
        c++;
    }
    else if((str[i]>'0')&&(str[i]<='9'))
    {
        n++;
    }
    else
    {
        sp++;
    }
    }
    cout<<"Number of vovels:"<<v<<endl;
    cout<<"Number of consonants:"<<c<<endl;
    cout<<"Number of numbers:"<<n<<endl;
    cout<<"Number of special characters:"<<sp<<endl;
    return 0;
}