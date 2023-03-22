#include<iostream>
using namespace std;
typeCasting(char ch)
{
    cout<<"ASCII value of "<<ch<<" is:"<<int(ch);
}
int main()
{
    char ch;
    cout<<"Enter any character to find its ASCII value:";
    cin>>ch;
    typeCasting(ch);
}

