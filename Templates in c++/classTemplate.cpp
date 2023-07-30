#include <iostream>
using namespace std;

template <typename T>

class Addition
{
private:
    T num1, num2;

public:
     Addition(T x, T y)
    {
       num1=x;
       num2=y;
    }
    void sum()
    {
        cout<<"Addition:"<<num1+num2;
    }

};
 int main()
{
    Addition <int> obj1(10,20);
    Addition <float> obj2(10.23,20.45);
    obj1.sum();
    cout<<endl;
    obj2.sum();
    return 0;
}