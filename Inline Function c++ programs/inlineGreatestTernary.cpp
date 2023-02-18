#include<iostream>
using namespace std;
inline  greatest_no(int a,int b,int c)
{
    int m;
   m=((a>b)?(a>c?a:c):(b>c?b:c));
}
int  main()
{
    int x,y,z;
    cout<<"Enter three numbers:";
    cin>>x>>y>>z;
    cout<<"The greatest number is:"<<greatest_no(x,y,z);
}



