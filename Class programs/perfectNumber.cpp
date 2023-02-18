#include<iostream>
using namespace std;
class perfect_no
{
private:
    int num,i,sum=0;
public:
    input()
    {
        cout<<"Enter a number:";
        cin>>num;
    }
    process()
    {
        for(int i=1;i<num;i++)
        {
            if(num%i==0)
            {
                sum=sum+i;
            }
        }
    }
    result()
    {
        if(sum==num)
        {
            cout<<num<<" is a perfect number";
        }
        else
        {
            cout<<num<<" is not a perfect number";
        }
    }
};
int main()
{
    perfect_no obj;
    obj.input();
    obj.process();
    obj.result();
}
