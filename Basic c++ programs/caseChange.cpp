#include<iostream>
using namespace std;
main()
{
    char ch;
    do
    {
    cout<<"Please enter an alphabet:";
    cin>>ch;
    if((ch>=65)&&(ch<=90))
       {
          ch=ch+32;
          cout<<"Entered alphabet is in uppercase:"<<endl;
          cout<<"It's lowercase conversion is:"<<ch;
       }
    else
    {
    if((ch>=97)&&(ch<=120))
    {
        ch=ch-32;
        cout<<"Entered alphabet is in lowercase:"<<endl;
        cout<<"It's uppercase conversion is:"<<ch;
    }
    else
    {
        cout<<"Entered character is not alphabet!..";;
    }
    }
    }
    while((ch<=65)||(ch>=120));
}

