#include<iostream>
using namespace std;
inline int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    cout<<sum(x,y);     //OR  cout<<"sum of "<<x<<" and "<<y<<" is:"<<sum(x,y);
}

