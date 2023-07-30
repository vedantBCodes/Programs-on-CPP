#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void display() //virtual function
    {
        cout<<"Base class function called";
    }
};
class Derived : public Base
{
    public:
    void display()
    {
        cout<<"Derived class function called";
    }
};

int main()
{
    Base *ptr;  //base class pointer
    Derived objDerived;  //derived class object
    ptr = &objDerived;
    ptr->display();
   return 0;
}