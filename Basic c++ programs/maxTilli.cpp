#include<iostream>
using namespace std;
 
void maxTill_i(int arr[],int Asize)
{
    int maxNo=0;
    for(int i=0;i<Asize;i++)
    {
        maxNo=max(maxNo,arr[i]);
        cout<<"Maximum number till i="<<i<<" is "<<maxNo<<endl;
    }
}
int main()
{
    int Asize,arr[10];
    cout<<"Enter the size of array:";
    cin>>Asize;
    cout<<"Enter any "<<Asize<<" array:";
    for(int i=0;i<Asize;i++)
    {
        cin>>arr[i];
    }
    maxTill_i(arr,Asize);
   return 0;
}