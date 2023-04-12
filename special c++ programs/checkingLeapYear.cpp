#include<iostream>
using namespace std;
leapYear(int year)
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
int main()
{
    int yr;
    cout<<"Enter a number:";
    cin>>yr;
    leapYear(yr);
}
