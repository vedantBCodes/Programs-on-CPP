#include<iostream>
using namespace std;
class facto
{
private:
    int a,b,c,num,i;
public:
    input()
    {
        cout<<"Enter a number:";
        cin>>num;
    }
    process()
    {
        a=0;
        b=1;
        cout<<"The fibbonaccy series:";
        cout<<b<<" ";
       for(i=1;i<num;i++)
       {
           c=a+b;
           cout<<c<<" ";
           a=b;
           b=c;
       }
    }
};
int main()
{
    facto obj;
    obj.input();
    obj.process();
}

