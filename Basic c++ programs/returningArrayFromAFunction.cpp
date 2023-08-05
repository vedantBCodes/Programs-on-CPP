#include<iostream>
using namespace std;
 
int* fun(int arr[],int x)
{
    return arr;
}
int main()
{
    int arr[]={3,4,5,2,6},x=5;
    int *arr2=fun(arr,x);
    for(int i=0;i<x;i++)
    {
        cout<<arr2[i]<<" ";
    }
   return 0;
}