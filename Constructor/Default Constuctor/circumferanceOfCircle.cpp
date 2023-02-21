#include<iostream>
#define pi 3.14
using namespace std;
class circle
{
private:
    int r;
public:
    circle()
    {
        cout<<"Enter the value of radius:";
        cin>>r;
        cout<<"Circumferance of circle:"<<2*pi*r;
    }
};
int main()
{
    circle obj;
}
