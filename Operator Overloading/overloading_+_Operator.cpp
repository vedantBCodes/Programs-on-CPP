#include<iostream>
using namespace std;
class overloaded
{
private:
    int x;
public:
    input()
    {
        cout<<"Enter a number:";
        cin>>x;
    }
    operator +()
    {
        x=x+2;
    }
    display()
    {
        cout<<"x="<<x;
    }
};
int main()
{
    overloaded obj;
    obj.input();
    + obj;
    obj.display();
}
