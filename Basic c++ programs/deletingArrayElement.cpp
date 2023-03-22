#include<iostream>
using namespace std;
void deletionOfArrayElement(int arr[20],int ,int );
int main()
{
    int arr[20],x,num,pos;
    cout<<"Enter the array size:";
    cin>>x;
    cout<<"Enter "<<x<<" array element:";
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a number you want to delete :";
    cin>>num;
    deletionOfArrayElement(arr,x,num);
}
void deletionOfArrayElement(int arr[20],int Asize,int num)
{
    int i;
    int posOfNumber;
    for(i=0;i<Asize;i++)
    {
        if(arr[i]==num)
        {
            posOfNumber=i;
        }
    }
    for(i=posOfNumber;i<Asize;i++)
    {
        arr[i]=arr[i+1];
    }
    Asize=Asize-1;
    cout<<"Array element after deleting "<<num<<" :";
    for(i=0;i<Asize;i++)
    {
        cout<<arr[i]<<" ";
    }
}

