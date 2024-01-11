#include<iostream>
using namespace std;
 
int main()
{
    int rows,cols,matrix[10][10];
    cout<<"Enter the number of rows and columns :";
    cin>>rows>>cols;

    cout<<"Enter "<<rows*cols<<" numbers :";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>matrix[i][j];
        }
    }

    cout<<"Entered matrix : \n";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"Transposed matrix : \n";
    for(int i=0;i<cols;i++)
    {
        for(int j=0;j<rows;j++)
        {
            cout<<matrix[j][i]<<" ";
        }
        cout<<"\n";
    }
   return 0;
}