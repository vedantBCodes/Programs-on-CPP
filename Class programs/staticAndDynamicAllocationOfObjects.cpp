/*
In C++, objects are instances of a class, and they are created in two ways:

Static Allocation (or automatic allocation): The object is created on the stack.

Dynamic Allocation: The object is created on the heap using pointers.

*/

#include <iostream>
using namespace std;

class Student 
{
   private:
   int roll_no;
   string name;
   public:
   void display(int roll_no,string name)
   {
       this ->roll_no=roll_no;
       this ->name=name;
   }
   void show()
   {
       cout<<"Roll number :"<<roll_no<<endl;
       cout<<"Name :"<<name<<endl;
   }
};

int main() 
{
    // 1. Static Allocation (Automatic Allocation on stack)
    Student s1; // Create an object car1 of class Car
    
    // Accessing and setting attributes using the dot (.) operator
    s1.display(21,"Vedant"); 
    s1.show();
    
    
    // 2. Dynamic Allocation (on heap using pointers)
    Student* s2=new Student(); // Create an object dynamically on the heap
    
    // Accessing members using the arrow (->) operator
    s2->display(12,"Rahul");  
    s2->show();
    
    delete s2;
  
    return 0;
}

/*
Explanation:

Static Allocation:

In the line Student s1;, s1 is an object of the class Student. 
It's created on the stack and will be automatically destroyed when the scope (in this case, main() function) ends.
Access members using the dot (.) operator.

Dynamic Allocation:

Student* s2 = new Student(); creates a new object of the class Student on the heap. 
It returns a pointer to the dynamically created object.
Access members using the arrow (->) operator because s2 is a pointer.

delete s2; is used to free the memory that was allocated dynamically. 
It's important to deallocate dynamically allocated objects to prevent memory leaks.

*/