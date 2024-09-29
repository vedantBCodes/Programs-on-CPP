#include <iostream>
using namespace std;

//Calculating the size of array using sizeof operator  ---> v.v IMP

int main() 
{
    int arr1[]={1,2,3,4,5};
    int intSize=sizeof(arr1)/sizeof(int);
    cout<<"Size of given integer array :"<<intSize<<endl;
    
    /*
    Here sizeof operator is used to find the size of an array .
    sizeof(arr1) gives the memory required to store the whole array i.e 5*4=20 bytes.
    And sizeof(int) gives the memory required to store an integer i.e 4 bytes .
    By deviding the whole memory by the memory required to store the integer , we get the size of memory .
    */
    
    char arr3[]={'A','B','C','D'};
    int charSize=sizeof(arr3)/sizeof(char);
    cout<<"Size of given character array :"<<charSize<<endl;
    
    double arr2[]={1.23,2.14,3.56,4.25,5.98,6.34};
    double doubleSize=sizeof(arr2)/sizeof(double);
    cout<<"Size of given double array :"<<doubleSize<<endl;

}