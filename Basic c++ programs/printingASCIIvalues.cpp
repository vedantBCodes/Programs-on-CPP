#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=256;i++)
    {
        cout<<i<<":-"<<char(i)<<setw(5);
    }
}
