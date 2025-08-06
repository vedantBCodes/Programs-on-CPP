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
void removeDuplicates2(int arr[], int Asize) {
    int arr2[Asize];
    int cnt = 0;
    bool check;

    for(int i = 0; i < Asize; i++) {
        check = false;
        for(int j = 0; j < cnt; j++) {  // corrected: j < cnt
            if(arr[i] == arr2[j]) {
                check = true;
                break; // optimization: break when duplicate is found
            }
        }
        if(!check) {
            arr2[cnt] = arr[i];
            cnt++;
        }
    }

    // Output the result
    for(int i = 0; i < cnt; i++) {
        cout << arr2[i] << " ";
    }
}

int main()
{
    int arr[20],Asize;
    cout<<"Enter the size of array:";
    cin>>Asize;
    cout<<"Enter "<<Asize<<" array elements with duplicates elements:";
    for(int i=0;i<Asize ;i++)
    {
        cin>>arr[i];
    }
    removeDuplicates2(arr,Asize);
}

