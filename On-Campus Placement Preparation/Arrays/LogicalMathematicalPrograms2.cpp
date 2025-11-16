/*

function1 : Find all pairs of elements whose sum equals a given number (Two Sum)
function2 : Find triplets whose sum equals a given number (Three Sum)
function3 : Count pairs with a given difference
function4 : Rearrange array in alternating positive and negative numbers
function5 : Rearrange array in increasing–decreasing order (wave form)
function6 : Sort 0s, 1s, and 2s (Dutch National Flag problem)
function7 : Find equilibrium index (where left sum = right sum)

*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;
 
void function1(int arr[], int size,int total)
{
    int sum;
    cout<<"Pairs with sum "<<total<<" : \n";
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            sum = arr[i] + arr[j];
            if(sum==total)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}

void function2(int arr[], int size,int total)
{
    int sum;
    cout<<"Triplet with sum "<<total<<" : \n";
    for(int i=0;i<size-2;i++)
    {
        for(int j=i+1;j<size-1;j++)
        {
            for(int k=j+1;k<size;k++)
            {
                sum = arr[i] + arr[j] + arr[k];
                if(sum==total)
                {
                   cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
}

void function3(int arr[],int size, int totalDiff)
{
      int diff;
    cout<<"Pairs with difference  "<<diff<<" : \n";
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            diff = arr[j] - arr[i];
            if(diff==totalDiff)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }  
}

void function4(int arr[],int size)
{
    vector<int> pos, neg;

    // Step 1: Separate positives and negatives
    for(int i = 0; i < size; i++) {
        if(arr[i] >= 0) pos.push_back(arr[i]);
        else neg.push_back(arr[i]);
    }

    int i = 0, p = 0, q = 0;

    // Step 2: Fill array by alternating
    while(p < pos.size() && q < neg.size()) {
        arr[i++] = pos[p++];   // positive
        arr[i++] = neg[q++];   // negative
    }

    // Step 3: If any positives left
    while(p < pos.size()) {
        arr[i++] = pos[p++];
    }

    // Step 4: If any negatives left
    while(q < neg.size()) {
        arr[i++] = neg[q++];
    }

    cout<<"Array elements after rearrangement : ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

/*
Wave Form Arrangement (Increasing–Decreasing Order)

The goal is to rearrange the array like this:
a[0] < a[1] > a[2] < a[3] > a[4] < a[5] …

Approach : 
1️⃣ First, you sort the array

2️⃣ Then you swap every pair of adjacent elements
Swap:
element at index 0 with 1
index 2 with 3
index 4 with 5
and so on…

Example:
Original: 3 6 1 8 4 2
After rearangment : [2, 1, 4, 3, 8, 6]
*/

void function5(int arr[],int size)
{
    // Correct sorting (ascending)
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    // Create wave form
    for(int i=0;i<size-1;i+=2)
    {
        swap(arr[i], arr[i+1]);
    }

    cout<<"Array elements after rearrangment : ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void function6(int arr[],int size) //Brute-force approach
{
    int start=0;
    int end=size-1;
    for(int i=0;i<size;)
    {
        if(arr[i]==0)
        {
            int temp=arr[i];
            for(int j=i;j>=start+1;j--)
            {
                arr[j] = arr[j-1];
            }
            arr[start]=temp;
            start++;
            i++;
        }
        else if(arr[i]==2)
        {
            int temp=arr[i];
            for(int k=i;k<end;k++)
            {
                arr[k] = arr[k+1];
            }
            arr[end]=temp;;
            end--;
        }
        else
        {
             i++;
        }
    }

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void function7(int arr[],int size)
{
    int sum = 0;

    // total array sum
    for (int i = 0; i < size; i++)
        sum += arr[i];

    // check all indices
    for (int i = 0; i < size; i++)
    {
        int left = 0;

        for (int j = 0; j < i; j++)
            left += arr[j];

        int right = sum - left - arr[i];

        if (left == right)
        {
            cout << "Equilibrium index : " << i;
            return;
        }
    }
}


int main()
{
    int arr[] = {1, 3, 5, 2, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    function7(arr,size);
   return 0;
}