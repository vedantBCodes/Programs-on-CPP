o#include<iostream>
using namespace std;
class table
{
private:
    int i,j,sum=0;
public:
    process()
    {
        for(i=1;i<=10;i++)
        {
            for(j=1;j<=10;j++)
            {
                sum=i*j;
                cout<<i*j<<"\t";
              /*  if(sum>=10)
                {
                cout<<i*j<<"  ";  2 spaces
                }
                else
                {
                    cout<<i*j<<"   "; 3 spaces
                }*/
            }
            cout<<endl;
        }
    }
};
int main()
{
    table obj;
    obj.process();
}
