/*

Function6 : Move all zeros to the end (without changing the order of other elements)
Function7 : Separate even and odd numbers into two arrays
Function8 : Copy all unique elements into a new array
Function9 : Remove duplicate elements from a sorted array
Function10 : Remove duplicate elements from an unsorted array 

*/  

#include<iostream>
using namespace std;
 
void function6(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i;j<size-1;j++)
            {
                arr[j]=arr[j+1];
            }
            arr[size-1]=0;
            i--;
        }
    }
    cout<<"Array elements after moving zeros at the end : ";

    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }
}

void function7(int arr[] , int size)
{
    int even[size] , x=0;
    int odd[size] , y=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            even[x]=arr[i];
            x++;
        }
        else
        {
            odd[y]=arr[i];
            y++;
        }
    }

    cout<<"Even numbers : ";
    for(int i=0;i<x;i++)
    {
        cout<<even[i]<<" "; 
    }

    cout<<"\nOdd numbers : ";
    for(int i=0;i<y;i++)
    {
        cout<<odd[i]<<" ";
    }
}

void function8(int arr[],int size)
{
    int unique[size],x=0;
    for(int i=0;i<size;i++)
    {
        int cnt=0;
        for(int j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
            }
        }
        if(cnt==1)
        {
            unique[x]=arr[i];
            x++;
        }
    }
    cout<<"Unique Array elements : ";
    for(int i=0;i<x;i++)
    {
        cout<<unique[i]<<" ";
    }
}

void function9(int arr[],int &size)
{
    for(int i=1;i<size;i++)
    {
        if(arr[i-1]==arr[i])
        {
            for(int j=i;j<size;j++)
            {
                arr[j]=arr[j+1];
            }
            size--;
            i--;
        }
    }
    cout<<"Array elements after removing duplicates : ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void function10(int arr[], int size)
{
    for(int i=1;i<size;i++)
    {
        for(int k=i-1;k>=0;k--)
        {
            if(arr[k]==arr[i])
            {
                for(int j=i;j<size;j++)
               {
                    arr[j]=arr[j+1];
               }
               size--;
               i--;
            }
        }
    }
    cout<<"Array elements after removing duplicates : ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
   int arr[] = {1,6,1,2,5,7,5,6};
   int size=sizeof(arr)/sizeof(arr[0]);
   function10(arr,size);
   return 0;
}