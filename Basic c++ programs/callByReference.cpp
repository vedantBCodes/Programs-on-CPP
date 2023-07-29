#include<iostream>
using namespace std;

                      //CALL BY REFERENCE (Using pointer)
void update(int *x,int *y)
{
    *x=*x+10;
    *y=*y+10;
}
int main()
{
    int a,b;
    a=4;
    b=5;
    update(&a,&b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b;
}

/* Here the values of a and b are changing because we are passing the address of a and b
and update operation is performed on the value at that address */