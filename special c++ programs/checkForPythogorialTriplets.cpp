#include<iostream>
using namespace std;
 
bool pythogorialTriplets(int num1,int num2,int num3)
{
   int maxNum;
   int sum=0;
   maxNum = num1>num2 ? (num1>num3?num1:num3):(num2>num3?num2:num3);
   if(maxNum!=num1)
   {
    sum=sum+(num1*num1);
   }
   if(maxNum!=num2)
   {
    sum=sum+(num2*num2);
   }
   if(maxNum!=num3)
   {
    sum=sum+(num3*num3);
   }
   if(sum==(maxNum*maxNum))
   {
    return true;
   }
   else
   {
    return false;
   }

}

int main()
{
    int a,b,c;
    cout<<"Enter any the numbers to check whether they are pythogorial triplets or not:";
    cin>>a>>b>>c;
    bool check=pythogorialTriplets(a,b,c);
    if(check==true)
    {
       cout<<"Yes it is a pythogorian triplet";
    }
    else
    {
        cout<<"No it is not a pythogorian triplet";
    }
   return 0;
}