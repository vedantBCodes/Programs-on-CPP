#include<iostream>
using namespace std;
class occurance
{
private:
    int arr[20],num1,num2,i,cnt=0;
public:
    input();
    process();
    result();
};
    occurance::input()
    {
        cout<<"How many numbers you want to take:";
        cin>>num1;
        cout<<"Enter "<<num1<<" numbers:";
        for(i=0;i<num1;i++)
        {
            cin>>arr[i];
        }
    }
    occurance::process()
    {
        cout<<"Which number you want to check:";
        cin>>num2;
        for(i=0;i<num1;i++)
        {
            if(arr[i]==num2)
            {
                cnt++;
            }
        }
    }
    occurance::result()
    {
        cout<<num2<<" occurs "<<cnt<<" times.";
    }
int main()
{
    occurance obj;
    obj.input();
    obj.process();
    obj.result();
}
