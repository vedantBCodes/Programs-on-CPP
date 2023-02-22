#include<iostream>
using namespace std;
class perfect_no
{
private:
    int num,cnt=0;
public:
    friend perfect (perfect_no obj);
};
perfect(perfect_no obj)
{
    int i,sum=0;
    cout<<"Enter a number:";
    cin>>obj.num;
    for(i=1;i<obj.num;i++)
    {
        if(obj.num%i==0)
        {

            sum=sum+i;
        }
    }
    if(sum==obj.num)
    {
        cout<<obj.num<<" is a perfect number:";
    }
    else
    {
        cout<<obj.num<<" is not a perfect number:";
    }
}
int main()
{
    perfect_no obj2;
    perfect(obj2);
}
