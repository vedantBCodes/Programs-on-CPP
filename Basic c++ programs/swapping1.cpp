#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter the values of a and b:";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"The value of a:"<<a<<endl;
    cout<<"The value of b:"<<b;
}
