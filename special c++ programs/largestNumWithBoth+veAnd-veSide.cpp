#include<iostream>
#include<climits>
using namespace std;
//Finding the largest number whose both +ve and -ve side is present in array
int largestNumber(int arr[] , int Asize )
{
    int max=INT_MIN;
    for(int i=0;i<Asize ;i++)
    {
        for(int j=0;j<Asize ; j++)
        {
            if(arr[j]==(-(arr[i])))
            {
              if(arr[j]>0 && arr[j]>max)
              {
                  max= arr[j];
              }
            else if(arr[i]>0 && arr[i]>max)
              {
                  max= arr[i];
              }
            }
        }
    }
    if( max == INT_MIN )
    {
        return 1;
    }
        return max;
}
int main()
{
    int arr[]={4,5,-3,3,-5,7,-9,9};
    int Asize=8;
    int num = largestNumber(arr,Asize);
    if(num!=1)
    {
        cout<<num<<" is your number";
    }
    else
    {
        cout<<" Number not found ";
    }
}
