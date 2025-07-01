//Maximum sum of a SubArray in an Array
#include <iostream>
#include <vector>
using namespace std;
void maxSubArrays(vector <int>vect1)
{
    int total = 0;
   for(int i=0; i< vect1.size(); i++)
   {
       for(int j=i;j<vect1.size();j++)
       {
           int sum=0;
           for(int k=i;k<=j;k++)
           {
               sum = sum + vect1[k];
           }
           if(sum>total)
           {
               total=sum;
           }
       }
   }
   cout<<"The maximum sum of a subarray is :"<<total;
}
int main() 
{
    vector<int> vect1 = {0,2,3,4,5};
    maxSubArrays(vect1);
}


