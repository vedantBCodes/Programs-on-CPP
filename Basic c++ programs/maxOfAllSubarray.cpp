// Max of all subarray of size k from an array
#include <iostream>
#include<vector>
using namespace std;

void maxofAllSubarray(vector<int> v1,int size)
{
    vector<int> v2;
    int maxNum=0;
    int cnt=0;
    for(int i=0;i<=v1.size()-size;i++)
    {
        int maxNum=v1[i];
        for(int j=i;j<size+i;j++)
        {
            maxNum=max(maxNum,v1[j]);
        }
         v2.push_back(maxNum);
    }
    
    for(int val : v2)
    {
        cout<<val<<" ";
    }
}
int main() 
{
    vector<int> v1={8,9,7,6,4,5};
    int size=4;
    maxofAllSubarray(v1,size);
    return 0;
}