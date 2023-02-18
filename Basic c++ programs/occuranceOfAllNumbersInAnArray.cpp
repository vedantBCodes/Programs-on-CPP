#include<iostream>
using namespace std;
int main( )
{
    int arr1[20]={1,2,1,4,3,2,1,4};
    int arr2[20],i,j,k;
{
        int cnt=0;
        for(j=i-1;j>=0;j--)
        {
            if(arr1[i]==arr1[j])
            {
            break;
            }
        }
        for(k=0;k<8;k++)
        {
            if(arr1[i]==arr1[k])
            {
                cnt++;
            }
        }
        cout<<arr1[i]<<" occurs "<<cnt<<" times"<<endl;
    }

}
