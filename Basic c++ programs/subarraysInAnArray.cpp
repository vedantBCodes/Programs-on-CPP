//SubArrays in an Array
#include <iostream>
#include <vector>
using namespace std;
void subArrays(vector <int>vect1)
{
    int cnt=0;
    cout<<"SubArrays in a given Array :"<<endl;
   for(int i=0; i< vect1.size(); i++)
   {
       for(int j=i;j<vect1.size();j++)
       {
           for(int k=i;k<=j;k++)
           {
               cout<<vect1[k];
           }
             cout<<" ";
             cnt++;
       }
       cout<<endl;
   }
   cout<<"Total number of subArrays are :"<<cnt;
}
int main() 
{
    vector<int> vect1 = {1,2,3,4,5};
    subArrays(vect1);
}