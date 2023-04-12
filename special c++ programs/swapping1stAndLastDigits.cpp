#include<iostream>
using namespace std;
void swapping(int num)
{
    int x,y,z,w=1,num3=0,a,cnt=0,cnt2;
    int no=num;
    int num2=num;
    x=no%10;
    int temp;
    temp=x;
    while(no>0)
    {
        y=no%10;
        no=no/10;
        cnt++;
    }
    while(num2>0)
    {
        z=num2%10;
        if(z==x)
         {
            num3=num3+(y*w);
         w=w*10;
         x=a;
    num2=num2/10;
    cnt2++;
         continue;
         }
         if(z==y)
         {
             if(cnt2==cnt-1)
             {
             num3=num3+(temp*w);
         w=w*10;
         num2=num2/10;
         cnt2++;
         continue;
             }
         }
         num3=num3+(z*w);
         w=w*10;
         cnt2++;
         num2=num2/10;
    }
    cout<<num3;
}
int main()
{
    int x;
    cout<<"Enter a number:";
    cin>>x;
    swapping(x);
}
