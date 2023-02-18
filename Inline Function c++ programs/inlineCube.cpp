#include<iostream>
using namespace std;
inline double cube(double x)
{
    return (x*x*x);
}
int  main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Cube of "<<a<<" is:"<<cube(a);
}
