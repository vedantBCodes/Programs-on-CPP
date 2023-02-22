#include<iostream>
using namespace std;
class decimal//program to convert binary number into decimal number
{
    private:
    int no;
    public:
    input()
    {
    cout<<"enter a binary value:";
    cin>>no;}
    friend binary(decimal obj);
};
binary(decimal obj)
{
    int a,b,c,x,y,z,w=0,cnt=0,i,d=1;
    a=obj.no;
    c=obj.no;
    while(a>0)
    {
        x=a%10;
        cnt++;
        a=a/10;
    }
    for(i=1;i<=(cnt-1);i++)
    {
        d=d*2;
    }
    c=obj.no;
    for(z=1;z<=d;)
    {for(c=obj.no;c>0;c=c/10)
        {
            y=c%10;
            w=w+(y*z);
            z=z*2;
        }
    }
    cout<<"the decimal conversion of binary number "<<obj.no<<" is:"<<w;
}
main()
{
    decimal obj2;
    obj2.input();
    binary(obj2);
}

