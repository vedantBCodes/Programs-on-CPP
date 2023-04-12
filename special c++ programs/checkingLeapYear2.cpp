#include<iostream>
using namespace std;
leapYear(int yr)
{
    if((yr%100==0)&&(yr%400==0)||(yr%100!=0)&&(yr%4==0))
    {
        cout<<yr<<" is a leap year";
    }
    else
    {
        cout<<yr<<" is not a leap year";
    }
}
int main()
{
    int year;
    cout<<"Enter a number:";
    cin>>year;
    leapYear(year);
}
