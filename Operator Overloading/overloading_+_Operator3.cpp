#include<iostream>
using namespace std;
class f_unary
{
private:
    int num;
public:
    input()
    {
        cout<<"Enter a number:";
        cin>>num;
    }
    friend operator +(f_unary &obj1);
};
operator +(f_unary &obj1)
{
    cout<<"Square of "<<obj1.num<<" is:"<<obj1.num*obj1.num;
}
int main()
{
    f_unary obj2;
    obj2.input();
    operator +(obj2);

}
