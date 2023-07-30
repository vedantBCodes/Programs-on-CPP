#include<iostream>
using namespace std;

template <typename T>   //INCOMPLETE PROGRAM

void sort(T arr[],T size)
{
    for(T i=0;i<size;i++)
    {
        for(T j=1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                T temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(T i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr1[]={2,3,1,4,6},x=5;
   // float arr2[]={6.4,5.3,6.4,7.8,1.2},y=5;
    cout<<"Sorted integer array:"<<sort(arr1,x);
   // cout<<"Sorted float array:"<<sort(arr2,y);
}