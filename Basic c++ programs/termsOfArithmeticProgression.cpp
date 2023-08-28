/*
Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
N varies from 1 to 1000.
Input format :
Integer x
Output format :
Terms of series (separated by space)
Sample Input 1 :
10
Sample Output 1 :
5 11 14 17 23 26 29 35 38 41
Sample Input 2 :
4
Sample Output 2 :
5 11 14 17
*/
#include<iostream>
using namespace std;

void termsOfAP(int num)
{
    int cnt=1;
    int i=1;
    cout<<"The first "<<num<<" terms of AP are : ";
    while(cnt<=num)
    {
        int term=((3*i)+2);
        if(term%4!=0)
        {
            cout<<term<<" ";
            cnt++;
        }
        i++;
    }
}
int main()
{
    int num=10;
    termsOfAP(num);
   return 0;
}