// 1D to 2D
#include <iostream>
using namespace std;

void _1Dto2DarrayConversion(int arr[],int rows,int cols)
{
    int index=0;
    int newArr[rows][cols];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            newArr[i][j]=arr[index];
            index++;
        }
    }
    cout<<"Printing new 2D array :"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<newArr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() 
{
    int arr[]={1,2,3,4,5,6};
    int arrLen=sizeof(arr)/sizeof(arr[0]);
    int rows,cols;
    cout<<"Enter the number of rows and columns :";
    cin>>rows>>cols;
    while(arrLen!=(rows*cols))
    {
        cout<<"2D array is not possible with "<<rows<<" rows and "<<cols<<" columns"<<endl;
        cout<<"Please enter another set of rows and cols :";
        cin>>rows>>cols;
    }
    _1Dto2DarrayConversion(arr,rows,cols);
    return 0;
}