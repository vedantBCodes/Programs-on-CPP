#include<iostream>
using namespace std;
int main()
{
    char name1[30];
    string name2; //one can also use string as a data type in c++
    string name3=("vedant yeotikar"); //one can also initialized string
    cout<<"Enter a name:";
    cin>>name1;
    cout<<"Entered name is:"<<name1<<endl;
    cout<<"Enter a name:";
    cin>>name2;
    cout<<"Entered name is:"<<name2<<endl;
    cout<<"Initialized string is:"<<name3<<endl;
    cout<<"name3[4] :-"<<name3[4]; //one can also access string characters
}
