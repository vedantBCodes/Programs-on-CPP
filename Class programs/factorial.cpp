#include<iostream>
using namespace std;
class facto
{
private:
    int fact=1,i,num;
public:
    input()
    {
        cout<<"Enter a number:";
        cin>>num;
    }
    process()
    {
       for(i=1;i<=num;i++)
       {
           fact=fact*i;
       }
    }
    result()
    {
        cout<<"Factorial of "<<i<<" is:"<<fact;
    }
};
int main()
{
    facto obj;
    obj.input();
    obj.process();
    obj.result();
}
