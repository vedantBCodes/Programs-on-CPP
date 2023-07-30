#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
    string str;
    ifstream in("demo.txt");
    getline(in,str); //This will read only first line from the whole file and stored it in str string
    cout<<str;
    in.close();
   return 0;
}
