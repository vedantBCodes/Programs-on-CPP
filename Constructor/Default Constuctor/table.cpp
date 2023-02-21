#include<iostream>
using namespace std;
class table
{
private:
    int num,i;
public:
    table()
    {
        cout<<"Enter a number:";
        cin>>num;
        for(i=1;i<=10;i++)
        {
            cout<<i<<"*"<<num<<":"<<num*i<<endl;
        }
    }
};
int main()
{
    table obj;
}
