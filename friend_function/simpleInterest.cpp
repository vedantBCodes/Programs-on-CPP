#include<iostream>
using namespace std;
class simple_i
{
private:
    int p,n;
    float r,si;
public:
    friend s_interest(simple_i obj);
};
s_interest(simple_i obj)
{
    cout<<"Enter the values of p,n and r:";
    cin>>obj.p>>obj.n>>obj.r;
    obj.si=(obj.p*obj.n*obj.r)/100;
    cout<<"Simple interest:"<<obj.si;
}
int main()
{
    simple_i obj2;
    s_interest(obj2);
}
