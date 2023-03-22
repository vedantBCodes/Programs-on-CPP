#include<iostream>
using namespace std;
void insertionOfArrayElement(int arr[20],int ,int ,int);
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
    cout<<"Enter a number you want to insert :";
    cin>>num;
    cout<<"At which position you want to insert:"<<num<<" :";
    cin>>pos;
    insertionOfArrayElement(arr,x,num,pos);
}
void insertionOfArrayElement(int arr[20],int Asize,int num,int pos)
{
    int i;
    for(i=Asize;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=num;
    Asize=Asize+1;
    cout<<"Array element after inserting "<<num<<" :";
    for(i=0;i<Asize;i++)
    {
        cout<<arr[i]<<" ";
    }
}
