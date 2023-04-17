#include<iostream>
#include<math.h>
using namespace std;
void compoundInterest(int p,int n,float r,float t)
{
    float x,y;
    float  a;   //where a is a final aount;
    x=(1+(r/n));
    y=n*t;
    a=p*(pow(x,y));
    float CI=a-p;
    cout<<"Compound Interest:"<<CI;
}
int main()
{
    int p,n;
    float r,t;
    cout<<"Enter the value of principal amount:";
    cin>>p;
    cout<<"Enter the value of rate,time period and number of years:";
    cin>>r>>t>>n;
    compoundInterest(p,n,r,t);
}
