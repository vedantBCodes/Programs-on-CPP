#include<iostream>
using namespace std;
int a,b;  //Global variables
void update()
{
    a+=10;
    b+=10;
}
int main()
{
    a=4;
    b=5;
    update();
    cout<<"The updated value of a is "<<a<<endl;
    cout<<"The updated value of b is "<<b<<endl;

}