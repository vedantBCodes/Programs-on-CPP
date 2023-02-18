#include<iostream>
using namespace std;
print(int a)
{
    cout<<"Here is an integer value:"<<a<<endl;
}
print(double b)
{
    cout<<"Here is a float value:"<<b<<endl;
}
print(char c)
{
    cout<<"Here is a character value:"<<c<<endl;
}
int main()
{
   print(2.5);
   print('a');
   print(4);
}

