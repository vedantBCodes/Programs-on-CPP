#include<iostream>
using namespace std;

class rightAngleTriangle
{
   private:
   int maxLength;
   bool check;
   public:
   bool isRightAngleTriangle(int s1,int s2,int s3);
};
bool rightAngleTriangle::isRightAngleTriangle(int s1,int s2,int s3)
{
    int maxLength=max(s1,max(s2,s3));
    bool check=false;
    if(maxLength!=s1 and maxLength!=s2)
    {
        if((s1*s1+s2*s2)==pow(maxLength,2)){check=true;}
    }
    else if(maxLength!=s2 and maxLength!=s3)
    {
        if((s2*s2+s3*s3)==pow(maxLength,2)){check=true;}
    }
    else
    {
        if((s1*s1+s3*s3)==pow(maxLength,2)){check=true;}
    }
     return check;

}

int main()
{
    int a=8,b=6,c=10;
    // cout<<"Enter the length of the sides of triangle : ";
    // cin>>a>>b>>c;
    rightAngleTriangle obj;
    if(obj.isRightAngleTriangle(a,b,c))
    {
        cout<<"Given triangle is a right angled triangle";
    }
    else
    {
        cout<<"Given triangle is not a right angled triangle";
    }
   return 0;
}