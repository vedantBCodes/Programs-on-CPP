#include<iostream>
using namespace std;
int sum(int a,int b)
{
    cout<<"sum of "<<a<<" and "<<b<<" is:"<<a+b<<endl;
}
double sum(double a,int b)
{
    cout<<"sum of "<<a<<" and "<<b<<" is:"<<a+b<<endl;
}
double sum(int a,double b)
{
    cout<<"sum of "<<a<<" and "<<b<<" is:"<<a+b<<endl;
}
int main()
{
    sum(2.5,5);
    sum(8,1.5);
    sum(4,8);
}
