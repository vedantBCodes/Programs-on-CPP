#include<iostream>
using namespace std;
class area
{
public:
    area(int b,int h)
    {
        cout<<"Area of triangle:"<<(0.5*b*h);
    }
};
int main()
{
    area obj(7,3); //Function calling implicitly
    cout<<endl;
    area obj2=area(5,3); //Function calling explicitly
    cout<<endl;
    int b,h;
    cout<<"Enter the value of base and height of triangle:";
    cin>>b>>h;
    area obj3(b,h); //Function calling by passing arguments
}
