#include<iostream>
using namespace std;
int main()
{
    string s1="vedant"; //compile time initialization
    string s2,s3;
    cout<<s1<<endl;
    cout<<"Enter a string:";
    cin>>s2; //run time initialization--->cin will take input of only first word of any entered string
    cout<<"Enter another string:";
    getline(cin,s3); //run time initialization--->getline will take input of whole entered string
}
