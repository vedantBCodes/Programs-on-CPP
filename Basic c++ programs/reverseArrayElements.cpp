#include<iostream>
using namespace std;

void reverseAnArray(int arr[],int x)
{
      for(int i=0;i<x/2;i++)
      {
          int temp=arr[i];
          arr[i]=arr[x-1-i];
          arr[x-1-i]=temp;
      }
   cout<<"Reversed array elements are:";
   for(int i=0;i<x;i++)
   {
      cout<<arr[i]<<" ";
   }
}
 
int main()
{
   int arr[]={5,63,45,78,3,7},x=6;
   reverseAnArray(arr,x);
   return 0;
}