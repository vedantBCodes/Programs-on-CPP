#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
    ofstream out;
    out.open("demo.txt",ofstream::out |ofstream::trunc);  //truncate option
    out.close();
   return 0;
}