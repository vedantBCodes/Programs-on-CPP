/*

Function1 : Find the sum of all even numbers and odd numbers separately
Function2 : Find the difference between the sum of even-index and odd-index elements
Function3 : Find the largest sum of any subarray (Kadane’s Algorithm)
Function4 : Find the maximum product subarray
Function5 : Find missing number in a series (1 to n)
Function6 : Find repeating elements in an array

*/

#include<iostream>
using namespace std;
 
void function1(int arr[],int size)
{
   int evenSum=0;
   int oddSum=0;
   for(int i=0;i<size;i++)
   {
      if(arr[i]%2==0)
      {
         evenSum+=arr[i];
      }
      else
      {
         oddSum+=arr[i];
      }
   }
   cout<<"Sum of all even numbers "<<evenSum<<endl;
   cout<<"Sum of all odd numbers "<<oddSum<<endl;
}

void function2(int arr[],int size)
{
   int evenIndexSum=0;
   int oddIndexSum=0;
   for(int i=0;i<size;i++)
   {
      if(i%2==0)
      {
         evenIndexSum+=arr[i];
      }
      else
      {
         oddIndexSum+=arr[i];
      }
   }
   cout<<"Difference between the sum of even indexed and odd indexed number : "<<evenIndexSum - oddIndexSum<<endl;
}

void function3(int arr[],int size) //Brute force approach
{
   int maxSum=INT_MIN;
   int sum;
   for(int i=0;i<size;i++)
   {
      for(int j=i;j<size;j++)
      {
         sum=0;
         for(int k=i;k<=j;k++)
         {
            sum+=arr[k];
            cout<<arr[k]<<" ";
         }
         if(sum>maxSum)
         {
            maxSum=sum;
         }
         cout<<endl;
      }
   }
   cout<<"Longest sum of subarray : "<<maxSum;
}

void function3UsingkadaneAlgorithm(int arr[], int size) //Using kadane's algorithm
{
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < size; i++)
    {
        currSum += arr[i];

        if (currSum > maxSum)
            maxSum = currSum;

        if (currSum < 0)
            currSum = 0;
    }
    cout<<"Longest sum of subarray : "<<maxSum;
}

//Above Kadane's algorithm fail if all the array members are negative , so the below function is the better version of that

void function3UsingkadaneAlgorithm2(int arr[], int size) 
{
    int maxSum = arr[0];   // initialize with first element
    int currSum = arr[0];

    for (int i = 1; i < size; i++)
    {
        currSum = max(arr[i], currSum + arr[i]);  
        maxSum = max(maxSum, currSum);
    }
     cout<<"Longest sum of subarray : "<<maxSum;
}

void function4(int arr[],int size) //Brute force approach
{
   int maxPro=INT_MIN;
   int product;
   for(int i=0;i<size;i++)
   {
      for(int j=i;j<size;j++)
      {
         product=1;
         for(int k=i;k<=j;k++)
         {
            product*=arr[k];
            cout<<arr[k]<<" ";
         }
         if(product>maxPro)
         {
            maxPro=product;
         }
         cout<<endl;
      }
   }
   cout<<"Longest product of subarray : "<<maxPro;
}

void function5(int arr[],int size)
{
   int sum=0;
   for(int i=0;i<size;i++)
   {
      sum+=arr[i];
   }
   int n=size+1;
   int expectedSum=n*(n+1)/2;
   int diff=expectedSum-sum;
   cout<<"Missing Number : "<<diff;
}

void function6(int arr[],int size)
{
   cout<<"Repeated elements : ";
   for(int i=0;i<size;i++)
   {
      bool check=false;
      for(int j=i-1;j>=0;j--)
      {
         if(arr[i]==arr[j])
         {
            check=true;
         }
      }
      if(check==false)
      {
         for(int k=i+1;k<size;k++)
         {
            if(arr[i]==arr[k])
            {
               cout<<arr[i]<<" ";
            }
         }
      }
   }
}

int main()
{
   int arr[] = {1,2,3,2,4,5,4};
   int size = sizeof(arr)/sizeof(arr[0]);
   function6(arr,size);
   return 0;
}