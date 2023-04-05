#include<iostream>
using namespace std;
class charactersInString
{
    int cnt=0,i=0;
    public:
    charactersInString(char s1[]) //constructor
    {
        while(s1[i]!='\0')
        {
            cnt++;
            i++;
        }
        cout<<"Number of characters in an entered string is:"<<cnt;
    }
};
int main()
{
    char s1[100];
    cout<<"Enter  a string:";
   gets(s1);
   charactersInString obj(s1);
}
