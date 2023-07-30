#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    ifstream in;
    in.open("demo.txt");

    while(in.eof()==0)
    {
        getline(in,str);
        cout<<str<<endl;
    }
    in.close();
}
