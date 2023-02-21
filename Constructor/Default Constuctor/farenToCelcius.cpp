#include<iostream>
using namespace std;
class temp
{
private:
    float f,c;
public:
    temp()
    {
        cout<<"Enter temperature in farenheit:";
        cin>>f;
        c=((f-32)*5)/9;
        cout<<"Temperature in celcius:"<<c<<" celcius";
    }
};
int main()
{
    temp obj;
}

