#include<stdio.h>
int main()
{
    int arr[ ]={1,2,3,2,4,1,3,2,4,2},cnt1,cnt2;
    int i,j,major_no;
    major_no=arr[0];
    cnt1=1;
    for(i=0;i<10;i++)
    {
        cnt2=0;
        for(j=0;j<10;j++)
        {
            if(arr[j]==arr[i])
            {
                cnt2++;
            }
        }
        if(cnt2>cnt1)
        {
            cnt1=cnt2;
            major_no=arr[i];
        }
    }
    printf("%d occurs most times in a given array",major_no);
}

