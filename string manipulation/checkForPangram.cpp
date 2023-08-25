/*
A word or a sentence is called a pangram if all the characters of this language appear in it at least once. 
You are given a string s consisting of lowercase and uppercase Latin letters. Check whether this string is a pangram. Print "YES" or "NO".
We say that the string contains a letter of the Latin alphabet, if this letter occurs in the string in either uppercase or in lowercase.

Input format :
Line 1 : n (Number of characters in string)
Line 2 : Input string s

Output format :
YES or NO

Constraints :
1 <= n <= 100

Sample Input 1 :
12
toosmallword
Sample Output 1 :
NO

Sample Input 2 :
35
TheQuickBrownFoxJumpsOverTheLazyDog
Sample Output 2 :
YES

*/
#include<iostream>
using namespace std;
 
char* toUpperCase(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        str[i]=toupper(str[i]);
        i++;
    }
    return str;
 }
int stringLength(char str[])
{
     int cnt=0;
     int i=0;
     while(str[i]!='\0')
     {
        cnt++;
        i++;
    }
    return cnt;
 }

bool checkForPangram(char str[])
{
     int len=stringLength(str);
     if(len<26)
     {
        return false;
     }
     int num=65;
     int i;
     for(int j=1;j<=26;j++)
     {
        bool check=false;
        i=0;
        while(str[i]!='\0')
        {
            if(char(num)==str[i])
            {
               check=true;
            }
            i++;
        }
        if(check==false)
        {
            return check;
        }
        num++;
     }
     return true;

}
int main()
{
    char str[50]="TheQuickBrownFoxJumpsOverTheLazyDog";
//  cout<<"Enter a sentence to check whether it is pangram or not : ";
//      cin.getline(str,50);
    char* str2=toUpperCase(str);
     bool check=checkForPangram(str2);
     if(check==true)
     {
         cout<<"Given string is a pangram";
     }
     else
     {
         cout<<"Given string is not a pangram";
     }
   return 0;
}
