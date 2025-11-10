/*
🟢 Basic Array Programs

function1 : Input and display elements of an array
function2 : Find the sum and average of array elements
function3 : Find the maximum and minimum element in an array
function4 : Find the second largest and second smallest element
function5 : Count even and odd numbers in an array

*/

#include<iostream>
#include<climits>
using namespace std;

void function1(int arr[] , int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void function2(int arr[] , int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum :"<<sum<<endl;
    cout<<"Average :"<<sum/size;
}

void function3(int arr[] , int size)
{
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"Minimum element  :"<<min<<endl;
    cout<<"Maximum element  :"<<max<<endl;
}

void function4(int arr[], int size)
{
    if (size < 2) {
        cout << "Not enough elements to find second min and max." << endl;
        return;
    }

    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    int SecondMin = INT_MAX, SecondMax = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] < SecondMin && arr[i] > min)
            SecondMin = arr[i];
        if (arr[i] > SecondMax && arr[i] < max)
            SecondMax = arr[i];
    }

    if (SecondMin == INT_MAX)
        cout << "No second minimum element found." << endl;
    else
        cout << "Second Minimum element: " << SecondMin << endl;

    if (SecondMax == INT_MIN)
        cout << "No second maximum element found." << endl;
    else
        cout << "Second Maximum element: " << SecondMax << endl;
}

void function5(int arr[] , int size)
{
    cout<<"Even numbers  :";
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<" ";
        }
    }

    cout<<"\nOdd numbers  :";
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==1)
        {
            cout<<arr[i]<<" ";
        }
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    function4(arr,size);
}