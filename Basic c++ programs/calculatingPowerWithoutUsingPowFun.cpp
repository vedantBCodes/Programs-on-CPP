/*
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Input format :
Two integers x and n (separated by space)
Output Format :
x^n (i.e. x raise to the power n)
Constraints:
0 <= x <= 8, 0 <= n <= 9
Sample Input 1 :
 3 4
Sample Output 1 :
81
Sample Input 2 :
 2 5
Sample Output 2 :
32
*/

#include<iostream>
using namespace std;
 
int powerOf(int num,int pow)
{
    int result=1;
    for(int i=1;i<=pow;i++)
    {
        result=result*num;
    }
    return result;
}
int main()
{
    int num,pow;
    cout<<"Enter any number :";
    cin>>num;
    cout<<"Enter it's power :";
    cin>>pow;
    cout<<num<<"^"<<pow<<" is : ";
    cout<<powerOf(num,pow);
   return 0;
}