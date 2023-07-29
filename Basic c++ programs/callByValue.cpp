#include<iostream>
using namespace std;

                      //CALL BY VALUE
void update(int x,int y)
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
/* Here the value of a and b will not be changed because variables x and y are temperory variables (Local variables)
and they will be destroyed as soon as the function ends*/

// To perform the above operation successfullly call by reference should be used