/*
binomial coefficient of n and r (nCr)= n!/(r! * (n-r)!    !-factorial
*/

#include<iostream>
using namespace std;
 
int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int binomialCoefficient(int num1,int num2)
{
  int nCr=factorial(num1)/(factorial(num2)*factorial(num1-num2));
  return nCr;
}

int main()
{
    int num1;
    int num2;
    cout<<"Enter  any two numbers to calculate their binomial coefficient:";
    cin>>num1>>num2;
    int bc=binomialCoefficient(num1,num2);
    cout<<"Binomial coefficient of "<<num1<<" and "<<num2<<" is:"<<bc;
   return 0;
}