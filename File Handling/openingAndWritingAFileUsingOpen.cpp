#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    string str;
    cout<<"Enter a string:";
    getline(cin,str);
    ofstream out;
    out.open("demo.txt");
    out<<str;
    out.close();
}