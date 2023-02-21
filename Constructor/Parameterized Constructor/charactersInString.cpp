#include<iostream>
using namespace std;
class char_in_string
{
private:
    int i=0,cnt=0;
public:
    char_in_string(char str[20])
    {
        while(str[i]!=0)
        {
            i++;
            cnt++;
        }
        cout<<"The number of characters in a given string is:"<<cnt;
    }
};
int main()
{
    char str[20];
    cout<<"Enter a string:";
    cin>>str;
    char_in_string obj(str);
}
