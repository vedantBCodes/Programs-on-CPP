#include<iostream>
using namespace std;

template <typename T> 
T sum(T num1,T num2) 
{
    return (num1+num2);
}
int main()
{
    cout<<"Integer Addition:"<<sum(10,20)<<endl;
    cout<<"Float value Addition:"<<sum(10.45,20.35)<<endl;

    string str1="Hii ";
    string str2="Vedant ";

    cout<<"String concatination :"<<sum(str1,str2);
}
