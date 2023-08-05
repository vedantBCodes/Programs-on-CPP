#include<iostream>
using namespace std;
 
int* fun()
{
    static int arr[]={4,5,2,3,7};
    return arr;
}
int main()
{
    int *arr2=fun();
    cout<<arr2[0]<<endl;
    cout<<arr2[1];
   return 0;
}