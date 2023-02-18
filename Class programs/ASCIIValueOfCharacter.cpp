#include<iostream>
using namespace std;
class ASCII
{
private:
    char ch;
public:
    input()
    {
        cout<<"Enter a character:";
        cin>>ch;
    }
    result()
    {
        cout<<"ASCII value of "<<ch<<" is:"<<int(ch);
    }
};
int main()
{
    ASCII obj;
    obj.input();
    obj.result();
}
