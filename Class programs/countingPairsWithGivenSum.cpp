#include<iostream>
using namespace std;
class pairs
{
private:
    int arr[20],num,sum,i,j;
public:
    input()
    {
        cout<<"How many numbers you want to take:";
        cin>>num;
        cout<<"Enter "<<num<<" numbers:";
        for(i=0;i<num;i++)
        {
            cin>>arr[i];
        }
        cout<<"how much should be sum of 2 input array elements:";
        cin>>sum;
    }
    result()
    {
        int cnt=0;
        for(i=0;i<num;i++)
        {
            for(j=i+1;j<num;j++)
            {
                if(arr[i]+arr[j]==sum)
                {
                    cnt++;
                }
            }
        }
        if(cnt>0)
        {
        cout<<"The number of pairs whose sum is "<<sum<<" are:"<<cnt;
        }
        else
        {
        cout<<"No pair with sum 0";
        }
    }

};
int main()
{
    pairs obj;
    obj.input();
    obj.result();
}
