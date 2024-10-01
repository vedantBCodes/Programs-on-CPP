// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool tripletWithSum(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==sum)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main() {
    int arr[]={10,5,3,5,2}; 
    int sum=12;
    int n=sizeof(arr)/sizeof(arr[0]);
    if (tripletWithSum(arr,n,sum))
    {
        cout<<"Yess ! there is a triplet with sum="<<sum;
    }
    else
    {
        cout<<"Noo ! there is no triplet with sum="<<sum;
    }
    return 0;
}