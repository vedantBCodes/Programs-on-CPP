#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
    string str;
    ifstream in("demo.txt");
    getline(in,str);
    cout<<str;
    in.close();
   return 0;
}