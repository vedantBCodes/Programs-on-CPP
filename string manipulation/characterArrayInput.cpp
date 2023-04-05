#include<iostream>
using namespace std;
int main()
{
    char name1[]="vedant"; //compile time initialization
    cout<<name1<<endl;
    char name2[20];
    cout <<"Enter a name:";
    cin>>name2; //run time initialization--->cin will take input of only first word of any entered string
    char name3[20];
    cout<<"Enter  another word:";
    gets(name3); //run time initialization--->gets will take input of whole entered string
}
