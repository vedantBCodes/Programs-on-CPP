#include<iostream>
using namespace std;
void swapping(int num)
{
    int arr[20],a,j;
    int i=0;
    while(num>0)
    {
        a=num%10;
        arr[i]=a;
        i++;
        num=num/10;
    }
    for(j=(i-1);j>=0;j--)
    {
        if(j==0)
        {
            cout<<arr[i-1];
            continue;
        }
        if(j==(i-1))
        {
            cout<<arr[0];
            continue;
        }
        cout<<arr[j];
    }
}
int main()
{
    int x;
    cout<<"Enter a number:";
    cin>>x;
    swapping(x);
}

