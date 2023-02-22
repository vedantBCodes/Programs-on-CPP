#include<iostream>
#define pi 3.14
using namespace std;
class area
{
private:
    int a,r,l,d;
public:
    area(int r)
    {
        a=pi*r*r;
    }
    area(int l,int b)
    {
        a=l*b;
    }
    display()
    {
        cout<<"Area:"<<a;
    }
};
int main()
{
    area obj1(4);
    area obj2(2,4);
    obj1.display();
    cout<<endl;
    obj2.display();
}
