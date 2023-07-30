#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    ifstream in;
    in.open("demo.txt");
    getline(in,str);
    cout<<str;
}