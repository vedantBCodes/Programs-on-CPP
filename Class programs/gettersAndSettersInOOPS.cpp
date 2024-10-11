/*

In object oriented programmming , one can't access private data outside the class .
In Object-Oriented Programming (OOP), getters and setters are special methods that provide controlled access to an object's attributes (also called properties or fields). 

1. Getter (Access Method):
A getter is a method used to retrieve or access the value of an object's attribute.
It allows you to get the value of a private or protected field from outside the class in a controlled way.

2. Setter (Mutator Method):
A setter is a method used to modify or set the value of an object's attribute.
*/
#include <iostream>
using namespace std;

class student
{
    private:
    int roll_no=7;
    string name="Veda";
    public:
    int getRoll_no()
    {
        return roll_no;
    }
    string getName()
    {
        return name;
    }
    void setRoll_no(int num)
    {
        roll_no=num;
    }
    void setName(string newName)
    {
        name=newName;
    }
};
int main() 
{
    student std;
    cout<<"Roll number :"<<std.getRoll_no()<<endl;
    cout<<"Name :"<<std.getName()<<endl;
    
    std.setRoll_no(21);
    std.setName("Rahul");
    
    cout<<"Updated Roll number :"<<std.getRoll_no()<<endl;
    cout<<"Updated Name :"<<std.getName()<<endl;

// Here getRoll_no() and getName() are getter functions and setRoll_no() and setName() are setter functions.

}