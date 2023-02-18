#include<iostream>
using namespace std;
class size_of
{
private:
    int a,b;
    char ch;
    float x;
public:
    input()
    {
       cout<<"Size of which datatype you want to know:";
       cout<<"\nPress 1 for integer type:";
       cout<<"\nPress 2 for character type:";
       cout<<"\nPress 3 for float type:";
       cin>>a;
    }
    process()
    {
        switch(a)
        {
        case 1:
            cout<<"Size of int is:"<<sizeof(b)<<" bytes";
            break;
        case 2:
            cout<<"Size of charcter is:"<<sizeof(ch)<<" bytes";
            break;
        case 3:
            cout<<"Size of float is:"<<sizeof(x)<<" bytes";
            break;
        default:
            cout<<"You entered invalid option.";
        }
    }
};
int main()
{
    size_of obj;
    obj.input();
    obj.process();
}
