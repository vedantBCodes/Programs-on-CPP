#include<iostream>
using namespace std;
class sum
{
private:
    int num,num2,x,y,i;
public:
    input()
    {
        cout<<"Enter a number:";
        cin>>num;
    }
    process()
    {
        num2=num;
        x=num%10;
        while(num>0)
        {
            y=num%10;
            num=num/10;
        }
    }
    result()
    {
        cout<<"Sum of 1st and last digits in "<<num2<<" is:"<<x+y;
    }
};
int main()
{
    sum obj;
    obj.input();
    obj.process();
    obj.result();
}
