#include<iostream>
using namespace std;
class QR //class name can be in capital as well as small lettters
{
public:
    QR(int dd,int ds)
    {
        cout<<"Quotient:"<<dd/ds<<endl;
        cout<<"Remainder:"<<dd%ds;
    }
};
int main()
{
    QR obj(7,3);
    cout<<endl;
    int divident,divisor;
    cout<<"Enter the value of divident and divisor:";
    cin>>divident>>divisor;
    QR obj3(divident,divisor); //Function calling by passing arguments
}

