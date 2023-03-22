#include<iostream>
using namespace std;
typeCasting(double x)
{
    int y;
    y=x;
    cout<<"Type conversion of double value "<<x<<" is:"<<y;
}
int main()
{
    double num;
    cout<<"Enter a double value:";
    cin>>num;
    typeCasting(num);
}
