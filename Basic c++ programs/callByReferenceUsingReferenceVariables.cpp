#include<iostream>
using namespace std;

                      //CALL BY REFERENCE (Using reference variables)
void update(int &x,int &y)
{
    x=x+10;
    y=y+10;
}
int main()
{
    int a,b;
    a=4;
    b=5;
    update(a,b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b;
}