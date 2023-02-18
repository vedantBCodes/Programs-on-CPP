#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the values of a and b:";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"The value of a:"<<a<<endl;
    cout<<"The value of b:"<<b;
}

