#include<iostream>
using namespace std;
inline int greater_no(int a,int b)
{
    return (a>b)?a:b;
}
int  main()
{
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    cout<<"The greater number is:"<<greater_no(x,y);
}


