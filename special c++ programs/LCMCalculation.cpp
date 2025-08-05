#include<iostream>
using namespace std;
void LCMCalculation1(int x,int y)  //Wrost approach
{
    int arr1[20],arr2[20],m=1,n=1,i,j,a,b;
    for(i=0;i<10;i++)
    {
        a=x*m;
        arr1[i]=a;
        m++;
    }
     for(j=0;j<10;j++)
    {
        b=y*n;
        arr2[j]=b;
        n++;
    }
    for(i=0;i<10;i++)
    {for(j=0;j<10;j++)
        {if(arr1[i]==arr2[j])
           {cout<<"LCM of "<<x<<" and "<<y<<" is:"<<arr1[i];
            exit(0);
           }}
        }
    for(i=0;i<10;i++)
    {for(j=0;j<10;j++)
        {if(arr1[i]!=arr2[j])
           {
cout<<"LCM of "<<x<<" and "<<y<<" is:"<<1;
            exit(0);
           }}
        }
}

int HCFCalculation(int num1, int num2)   //Best Approach
{
    int minVal = min(num1, num2);
    for(int i=minVal ; i>=1 ; i--)
    {
        if((num1 % i == 0) && (num2 % i == 0))
        {
           return i;
        }
    }
    return 1;
}

int LCMCalculation2( int num1 , int num2 ) //Better approach
{
    int maxVal = min(num1, num2);
    for(int i=maxVal ; i<=num1*num2 ; i+=maxVal)
    {
        if((i % num1 == 0) && (i % num2 == 0))
        {
           return i;
        }
    }
    return num1*num2 ;
}

int LCMCalculation3( int num1 , int num2 ) //Best approach (Using formula)
{
    int hcf = HCFCalculation(num1, num2);
    return ( num1 * num2 ) / hcf ;
}
int main()    //program to calculate LCM of 2 numbers
{
    int x,y;
    cout<<"enter two numbers:";
    cin>>x>>y;
    int lcm LCMCalculation3(x,y);
    cout<<"LCM :"<<lcm;
}
