/*

Function1 : Insert an element at a specific position
Function2 : Delete an element from a specific position
Function3 : Merge two arrays
Function4 : Split an array into two halves
Function5 : Rotate array (left/right rotation)

*/

#include<iostream>
using namespace std;
 
void function1(int arr[],int &size,int ele,int pos) 
{
    if(pos<=0 || pos>size+1)
    {
        cout<<"Invalid position to insert";
        return;
    }
    for (int i = size; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = ele;
    size++;

    cout<<"Array elements after insertion :";
    for(int i=0;i<size;i++)
    {
      cout<<arr[i]<<" ";
    }
}

void function2(int arr[],int &size,int pos) 
{
    if(pos<=0 || pos>=size)
    {
        cout<<"Invalid position to delete";
        return;
    }

    for(int i=pos-1;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    cout<<"Array elements after deletion :";
    for(int i=0;i<size;i++)
    {
      cout<<arr[i]<<" ";
    }
}

void function3(int arr[],int arr2[],int size,int size2)
{
    int merged[size + size2]; // create a new array big enough

    for (int i = 0; i < size; i++) {
        merged[i] = arr[i];
    }

    for (int i = 0; i < size2; i++) {
        merged[size + i] = arr2[i];
    }

    cout << "Array elements after merging: ";
    for (int i = 0; i < size + size2; i++) {
        cout << merged[i] << " ";
    }
}

void function4(int arr[] , int size)
{
    int mid = size / 2;

    cout << "First half: ";
    for (int i = 0; i < mid; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nSecond half: ";
    for (int i = mid; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void function5(int arr[] , int size , string str)
{
    if(str=="left")
    {
        int x=1;
        for(int i=0;i<size;i++)
        {
            cout<<"left rotation"<<x<<" ";
           for(int j=i+1;j<size;j++)
           {
              cout<<arr[j]<<" ";
           }
           for(int k=0;k<=i;k++)
           {
              cout<<arr[k]<<" ";
           }
           x++;
           cout<<endl;
        }
    }
    else if(str=="right")
    {
        int x = 1;
    for (int i = 0; i < size; i++)
    {
        cout << "Right rotation " << x << " : ";

        for (int j = size - i - 1; j < size; j++)
        {
            cout << arr[j] << " ";
        }

        for (int k = 0; k < size - i - 1; k++)
        {
            cout << arr[k] << " ";
        }

        x++;
        cout << endl;
    }
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int arr2[] = {6,7,8,9,10};
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    function5(arr,size,"right");
   return 0;
}