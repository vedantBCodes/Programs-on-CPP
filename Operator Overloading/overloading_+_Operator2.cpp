#include<iostream>
using namespace std;
class square
{
private:
    int num;
public:
    input(int x)
    {
        num=x;
    }
    operator *()
    {
        cout<<"Square of "<<num<<" is:"<<num*num;
    }
};
int main()
{
    int z;
    cout<<"Enter a number:";
    cin>>z;
    square obj;
    obj.input(z);
    * obj;
}
