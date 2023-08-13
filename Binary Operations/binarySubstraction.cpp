#include <iostream>
using namespace std;
   //This program is only applicable if num1>num2
char* stringReverse(char str[])
{
    int len=strlen(str);
    int x=len-1;
    for(int i=0;i<(len/2);i++)
    {
        char temp=str[i];
        str[i]=str[x];
        str[x]=temp;
        x--;
    }
    return str;
}

void binarySubstraction(int num1, int num2)
{
    char str[30]="";
    int strIndex=0;
    int x = 0;
    while (num1 > 0 || num2 > 0)
    {
        int rem1 = num1 % 10;
        int rem2 = num2 % 10;
        if ((rem1 ==1  && rem2 == 0))   
        {
            if (x == 1)
            {
                str[strIndex]='0';
                strIndex++;
                x = 0;
            }
            else
            {
                str[strIndex]='1';
                strIndex++;
                x = 0;
            }
        }
        else if((rem1 == 0 && rem2 == 1))
        {
            if(x==1)
            {
                str[strIndex]='0';
                strIndex++;
                x=1;
            }
            else
            {
                str[strIndex]='1';
                strIndex++;
                x=1;
            }
        }
        else if (rem1 == 1 && rem2 == 1)
        {
            if (x == 1)
            {
                str[strIndex]='1';
                strIndex++;
                x = 1;
            }
            else
            {
                str[strIndex]='0';
                strIndex++;
                x = 0;
            }
        }
        else
        {
            if (x == 1)
            {
                str[strIndex]='1';
                strIndex++;
                x = 1;
            }
            else
            {
                str[strIndex]='0';
                strIndex++;
                x = 0;
            }
        }
        num1 = num1 / 10;
        num2 = num2 / 10;
    }
    if (x == 1)
    {
        str[strIndex]='1';
        strIndex++;
    }
    str[strIndex]='\0';
    char *strReverse=stringReverse(str);
    cout<<strReverse;
}

int main()
{
    int num1, num2;
    cout << "Enter any two binary numbers num1 and num1 (num1>num2):";
    cin >> num1 >> num2;
    cout << "Substraction of Binary numbers " << num1 << " and " << num2 << " is ";
    binarySubstraction(num1, num2);
    return 0;
}