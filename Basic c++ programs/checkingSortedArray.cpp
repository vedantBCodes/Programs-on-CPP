#include<iostream>
using namespace std;
int main()
{
    int arr[10],num,i,j=i+1;
    cout<<"How many array elements you want to take:";
    cin>>num;
    cout<<"Enter "<<num<<" array elements:";
    for(i=0;i<num;i++)
    {
      cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                cout<<"Entered array is not sorted";
                exit(0);
            }
        }
    }
    cout<<"Entered array is sorted";
}
