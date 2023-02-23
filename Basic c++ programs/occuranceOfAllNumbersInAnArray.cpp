#include<iostream>
using namespace std;
int main( )
{
    int arr1[20];
    int arr2[20],i,j,k,num;
    cout<<"How many numbers you want to take:";
    cin>>num;
    cout<<"Enter "<<num<<" array elements:";
    for(i=0;i<num;i++)
    {
        cin>>arr1[i];
    }
    for(i=0;i<num;i++)
  {
        int cnt=0;
        int x=0;
        for(j=i-1;j>=0;j--)
        {
            if(arr1[i]!=arr1[j])
            {
            x++;
            }
        }
        if(x==i)
        {
        for(k=0;k<num;k++)
        {
            if(arr1[i]==arr1[k])
            {
                cnt++;
            }
        }
        cout<<arr1[i]<<" occurs "<<cnt<<" times"<<endl;
        }
    }

}
