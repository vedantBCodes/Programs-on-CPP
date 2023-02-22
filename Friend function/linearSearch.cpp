#include<iostream>
using namespace std;
class L_search
{
private:
    int arr[20],num,x;
public:
    input()
{
    cout<<"How many numbers you want to take:";
    cin>>x;
}
    friend linear_s(L_search obj);
};
linear_s(L_search obj)
{
    int i;
    cout<<"Enter "<<obj.x<<" array elements:";
    for(i=0;i<obj.x;i++)
    {
        cin>>obj.arr[i];
    }
    cout<<"Enter an array element you want to search:";
    cin>>obj.num;
    for(i=0;i<obj.x;i++)
    {
        if(obj.arr[i]==obj.num)
        {
            cout<<obj.num<<" is present in an entered array.";
            exit(0);
        }
    }
    cout<<obj.num<<" is not present in an entered array.";
}
int main()
{
    L_search obj2;
    obj2.input();
    linear_s(obj2);
}
