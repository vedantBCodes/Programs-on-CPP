#include<iostream>
using namespace std;
 
char* fun()
{
    static char str[]="hello peter";
    return str;
}
int main()
{
    char *msg=fun();
    cout<<msg;
   return 0;
}