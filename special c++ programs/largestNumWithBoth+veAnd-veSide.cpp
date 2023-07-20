#include<iostream>
using namespace std;
//Finding the largest number whose both +ve and -ve side is present in array
int main()
{
    int arr[]={4,5,-3,3,-5,9,-7,8};
    int Asize=8;
    int i,j;
    for(i=0;i<Asize;i++)
    {
        for(j=(i+1);j<Asize;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    bool x=true;
    for(i=0;i<Asize;i++)
    {
        if(arr[i]>0)
        {
        for(j=i+1;j<Asize;j++)
        {
            if((arr[i]*arr[i])==(arr[j]*arr[j]))
            {
                cout<<arr[i];
                x=false;
            }
        }
        }
        if(x==false)
            {
               break; 
            }
    }

}