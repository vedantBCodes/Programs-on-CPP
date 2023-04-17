#include<iostream>
using namespace std;
void  removeDuplicates(int arr[ ],int Asize)
{
    int i,j,k,temp;
    for(i=0;i<Asize;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(arr[i]==arr[j])
            {
                for(k=i;k<Asize;k++)
                {
                    arr[k]=arr[k+1];
                }
                Asize--;
            }
        }
    }
    for(i=0;i<Asize;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[20],Asize;
    cout<<"Enter the size of array:";
    cin>>Asize;
    cout<<"Enter "<<Asize<<" array elements containing negative elements:";
    for(int i=0;i<Asize ;i++)
    {
        cin>>arr[i];
    }
    removeDuplicates(arr,Asize);
}

