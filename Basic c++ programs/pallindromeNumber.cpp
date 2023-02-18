#include<iostream>
using namespace std;
int main()
{
    int num,rev=0;
    cout<<"Enter a number to check whether it is pallindrome or not:";
    cin>>num;
    int num2=num;
    while(num>0)
    {
        int x=num%10;
         rev=x+(rev*10);
         num=num/10;
    }
    if(num2==rev)
    {
        cout<<num2<<" is a pallindrome number";
    }
    else
    {
         cout<<num2<<" is not a pallindrome number";
    }
}
