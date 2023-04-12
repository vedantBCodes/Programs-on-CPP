#include<iostream>
using namespace std;
//program to calculate mean median and mode for the ungrouped data
void CalculatingMeanModeAndMeadian(int arr[20],int len)
{
int i,j,sum=0,temp;
float x,mean;
for(i=0;i<len;i++)
{sum=sum+arr[i];}
mean=sum/len;
cout<<"mean of the data is:"<<mean<<endl;
cout<<"mode of the data is:";
for(i=0;i<len;i++)
{
    for(j=i+1;j<len;j++)
    {
        if(arr[i]==arr[j])
           {cout<<arr[i]<<endl;}
    }
}
for(i=0;i<len;i++)
{
    for(j=i+1;j<len;j++)
    if(arr[i]>arr[j])
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
cout<<"the sorted array element is:";
for(i=0;i<len;i++)
{cout<<arr[i]<<" ";}
cout<<endl;
cout<<"\nthe median of the data is:";
if(len%2==0)
{
    x=(arr[(len/2)-1]+arr[(len/2)])/2;
    cout<<x;
}
else
    cout<<arr[(len+1)/2];
}
int main()
{
    int arr[20],len,i;
    cout<<"enter the length of array:";
    cin>>len;
    cout<<"enter the ungrouped data:";
   for(i=0;i<len;i++)
   {
      cin>>arr[i];
   }
   CalculatingMeanModeAndMeadian(arr,len);
}
