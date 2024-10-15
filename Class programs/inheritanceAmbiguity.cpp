/*
Inheritance ambiguity occurs in object-oriented programming (OOP) when a class inherits from multiple classes,
and there is a conflict due to the presence of methods or properties with the same name in more than one parent class. 
This commonly happens in languages that support multiple inheritance, where a class can inherit from more than one superclass.
*/
#include <iostream>
using namespace std;

class A
{
    public :
    void show()
    {
        cout<<"Class A ";
    }
};

class B
{
    public :
    void show()
    {
        cout<<"Class B ";
    }
};

class C : public A , public B
{
    
};
int main()
{
    C obj ;
    // obj.show();    // This will give an ambiguity error .
    obj.B::show();   // Use :: (Scope resolution operator) with a perticular class .
    cout<<endl;
    obj.B::show();
    return 0;
}