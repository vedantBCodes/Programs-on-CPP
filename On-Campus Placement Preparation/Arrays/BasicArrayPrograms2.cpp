/*

Function6 : Count positive, negative, and zero elements
Function7 : Reverse an array
Function8 : Copy one array to another array
Function9 : Compare two arrays (check if they are equal)
Function10 : Find the frequency of each element

*/

#include<iostream>
using namespace std;

void function6(int arr[], int size)
{
    int pos=0;
    int neg=0;
    int zeros=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
        else
        {
            zeros++;
        }
    }
    cout<<"Positive Numbers :"<<pos<<endl;
    cout<<"Negative Numbers :"<<neg<<endl;
    cout<<"Zeros :"<<zeros<<endl;
}

void function7(int arr[],int size)
{
    for(int i=0;i<size/2;i++)
    {
        swap(arr[i],arr[size-1-i]);
    }
    cout<<"Reversed Array Elements : ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void function8(int arr[],int size)
{
     int *arrCopy = new int[size]; 
    for(int i=0;i<size;i++)
    {
        arrCopy[i]=arr[i];
    }
    cout<<"Copied Array Elements : ";
     for(int i=0;i<size;i++)
    {
        cout<<arrCopy[i]<<" ";
    }
}

bool function9(int arr1[], int arr2[] ,int size1, int size2)
{
    if(size1!=size2)
    {
        return false;
    }
    for(int i=0;i<size1;i++)
    {
        if(arr1[i]!=arr2[i])
        {
            return false;
        }
    }
    return true;
}

void function10(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        bool check=true;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[i] == arr[j])
            {
                check=false;
                break;
            }
        }
        int cnt=0;
        if(check==true)
        {
            for(int k=0;k<size;k++)
            {
                if(arr[i]==arr[k])
                {
                    cnt++;
                }
            }
            cout<<"The frequency of "<<arr[i]<<" is : "<<cnt<<endl;
        }
    }
}

int main()
{
    int arr[] = {1,2,3,4,3,2,1,1,1,2,2,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    function7(arr,size);

}