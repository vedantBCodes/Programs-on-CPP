#include<iostream>
using namespace std;
int  nthTerm(int num)
 {
    int a=1, b=1, c;
    int cnt=3;
    while(cnt<=num)
    {
       c=a+b;
       a=b;
       b=c;
       cnt++;
    }
    return c;
 }
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"The "<<num<<"th term in fibonaccy series is "<<nthTerm(num);
   return 0;
}