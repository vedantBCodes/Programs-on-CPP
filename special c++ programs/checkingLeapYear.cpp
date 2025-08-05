#include<iostream>
using namespace std;
leapYear1(int year)
{
    if(year%100==0)
    {
        if(year%400==0)
        {
            cout<<year<<" is a leap year";
        }
        else
        {
            cout<<year<<" is not a leap year";
        }
    }
    else
    {
        if(year%4==0)
        {
             cout<<year<<" is a leap year";
        }
         else
        {
            cout<<year<<" is not a leap year";
        }
    }
}
void leapYear2(int year)
{
    if((year%100==0 && year%400==0) || (year%100!=0 && year%4==0))
    {
        cout<<year<<" is a leap year";
    }
    else
    {
        cout<<year<<" is not a leap year";
    }
}
bool leapYear3(int year)
{
   return ((year%100==0 && year%400==0) || (year%100!=0 && year%4==0));
}
int main()
{
    int yr;
    cout<<"Enter a number:";
    cin>>yr;
    leapYear2(yr);
    if(leapYear3(yr))
    {
        cout<<yr<<" is a leap year";
    }
    else
    {
        cout<<yr<<" is not a leap year";
    }
}
