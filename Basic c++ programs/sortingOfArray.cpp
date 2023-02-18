#include<iostream>
using namespace std;
int main()
{
    int arr[20],i,j,num,temp;
    cout<<"How many array elements you want to take to sort it:";
    cin>>num;
    cout<<"Enter any "<<num<<" array elements:";
    for(i=0;i<num;i++)
    {
      cin>>arr[i];
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"Sorted array are:";
    for(i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
}
