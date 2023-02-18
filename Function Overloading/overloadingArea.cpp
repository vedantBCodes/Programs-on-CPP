#include<iostream>
#define pi 3.14
using namespace std;
Area(int r)
{
    cout<<"Area of circle having radius "<<r<<" is:"<<(pi*r*r)<<endl;
}
Area(int l,int b)
{
    cout<<"Area of rectangle having length "<<l<<" and breadth "<<b<<" is:"<<(l*b)<<endl;
}
int main()
{
    Area(2,4);
    Area(3);
}
