/*
You have x rupees
1 rupee = 1 chocolate
3 wrappers = 1 chocolate
SO how many chocolates you can get in x rupees ?
*/
#include <iostream>
#include <climits>
using namespace std;

void NoOfChocolates(int rupees)
{
   int choc = rupees;
   int wrap = choc;
   while(wrap >= 3)
   {
      int newChok = wrap /3;
      choc = choc + newChok;
      wrap = newChok + wrap % 3;
   }
   cout << "Total number of chocolates you will get in "<<rupees<<" rupees are " << choc;
   if(wrap!=0)
   {
       cout<<" ( With "<<wrap<<" wrappers )";
   }
}

void NoOfChocklatesIn15()
{
    int cnt=15;
    int x=15/3;
    cnt+=x;
    int y=x/3;
    cnt+=y;
    int z=x%3;
    if(z+y==3)
    {
        cnt++;
    }
    cout<<"Number of chocolates one can get in 15 rupees is "<<cnt<<endl;
}
int main() 
{
   int rupees ;
   cout<< "How many rupees do u have :";
   cin >> rupees ;
   NoOfChocklatesIn15();
   NoOfChocolates(rupees);
    return 0;
}
