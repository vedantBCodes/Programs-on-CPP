#include<iostream>
using namespace std;
int main()
{
    int p,n;
    float r,si;
    cout<<"Enter the value of principle amount:";
    cin>>p;
    cout<<"Enter the no of years:";
    cin>>n;
    cout<<"Enter the rate of interest:";
    cin>>r;
    si=(p*n*r)/100;
    printf("The simple interest:%f",si);
}
