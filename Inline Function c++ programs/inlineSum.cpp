#include<iostream>
using namespace std;
inline int  sum(int a,int b) //Here we are declaring the variables a and b,
{                                        //these variables are local to this  function only
    return a+b;
}
int main()
{
    cout<<sum(4,6);
    //If a function returns something then it is must to call that function in cout
}
