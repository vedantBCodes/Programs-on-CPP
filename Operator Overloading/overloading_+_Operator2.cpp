#include<iostream>
using namespace std;
class f_binary
{
private:
    int num;
public:
    input()
    {
        cout<<"Enter a number:";
        cin>>num;
    }
    friend operator +(f_binary &obj1,f_binary &obj2);
};
operator +(f_binary &obj1,f_binary &obj2)
{
    cout<<"Addition of  "<<obj1.num<<" and "<<obj2.num<<" is:"<<obj1.num+obj2.num;
}
int main()
{
    f_binary obj3,obj4;
    obj3.input();
    obj4.input();
    operator +(obj3,obj4);

}

