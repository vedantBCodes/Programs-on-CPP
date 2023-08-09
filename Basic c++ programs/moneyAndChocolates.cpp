/*
You have 15 rupees
1 rupee = 1 chocolate
3 wrappers = 1 chocolate
SO how many chocolates you can get in 15 rupees ?
*/

#include<iostream>
using namespace std;
 
int main()
{
    int cnt=15;
    int x=15/3;
    cnt+=x;
    int y=x/3;
    cnt+=y;
    int z=x%3;
    if(z+y==3)
    {
        cnt++;
    }
    cout<<"Number of chocolates one can get in 15 rupees is "<<cnt;
   return 0;
}