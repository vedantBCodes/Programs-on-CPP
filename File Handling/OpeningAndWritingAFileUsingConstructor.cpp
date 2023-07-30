#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
    string str="vedant yeotikar";
    ofstream out("demo.txt");
    out<<str; //OR out<<"Hii "<<str<<"\n how are you!";
    out.close();
   return 0;
}